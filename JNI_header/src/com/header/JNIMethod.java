package com.header;

import java.io.BufferedReader;
import java.io.File;
import java.io.FileOutputStream;
import java.io.FileReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.lang.instrument.IllegalClassFormatException;
import java.util.LinkedHashMap;
import java.util.Map;

import org.apache.commons.cli.CommandLine;
import org.apache.commons.cli.CommandLineParser;
import org.apache.commons.cli.DefaultParser;
import org.apache.commons.cli.Options;

public class JNIMethod {

	private static final String CMD = "jni-method";

	public static void main(String[] args) throws Exception {

		// Create a Parser
		CommandLineParser parser = new DefaultParser();
		Options options = new Options();
		options.addOption("o", "out", true, "specify output file" );
		options.addOption("p", "package", true, "specify java class package");
		options.addOption("h", "help", false, "Print this usage information");
		// Parse the program arguments
		CommandLine commandLine = parser.parse(options, args);
//		System.out.println(Arrays.toString(args));
		args = commandLine.getArgs();
//		System.out.println(Arrays.toString(args));
//		System.out.println(commandLine.getArgList());

		if(args.length == 0){
			showHelp();
			return;
		}

		//header
		String header = args[0];
		System.out.println("input file: "+header);
		if(commandLine.hasOption("p")){
			regx_replace_map.put(HeaderUtil.getMethodPrefix(commandLine.getOptionValue("p")), "");
		}else{
			String methodPrefix;
			try{
				String classLine = getClassLine(header);
				methodPrefix = HeaderUtil.getDefaultMethodPrefix(classLine);
			}catch(IllegalClassFormatException e){
				System.out.println(e.getMessage()+", 猜测方法前缀");
				String declarationLine = getDeclarationLine(header);
				String fullJNIMethodName = HeaderUtil.getFullJNIMethodName(declarationLine);
				methodPrefix = HeaderUtil.guessMethodPrefix(fullJNIMethodName);
			}
			regx_replace_map.put(methodPrefix, "");
		}

		String out;
		if(commandLine.hasOption("o")){
			out = commandLine.getOptionValue("o");
		}else{
			out = header+".out";
		}

		if(args.length == 1){
			formatHeaderFile(header, null, out);
			System.out.println("\"-help\" for more options");
		}else if(args.length == 2){
			formatHeaderFile(header, args[1], out);
		}
	}

	private static void showHelp() {
		System.out.println("usage: "+ CMD +" <input> <format>");
		System.out.println("Example: "+CMD+" C:\\Hello_jni.h jni_header.format -p com.example -o C:\\Hello_jni.h.out");
		System.out.println("\tinput\tinput head file generated by ndk-build");
		System.out.println("\tformat\tspecify format file");
		System.out.println("\t-o\tspecify output file");
		System.out.println("\t-p\tspecify java class package");
	}

	private static void formatHeaderFile(String header, String config, String out) throws IOException {
		genFormatMap(config);
		genContent(header);
		formatHeader();
		outFile(out);
	}

	@SuppressWarnings("resource")
	private static void outFile(String outFile) throws IOException{
		new FileOutputStream(outFile).write(header.getBytes());
		System.out.println("==========================================================");
		System.out.println("* SUCCESS!");
		System.out.println("* saved at: "+new File(outFile).getAbsolutePath());
		System.out.println("==========================================================");
	}

	private static void formatHeader() {
		for(Map.Entry<String, String> entry:regx_replace_map.entrySet()){
			header = header.replaceAll(entry.getKey(), entry.getValue());
		}
	}

	@SuppressWarnings("resource")
	private static void genContent(String cppHeader) throws IOException {
		BufferedReader br = new BufferedReader(new FileReader(cppHeader));
		String line;
		StringBuilder sb = new StringBuilder();
		while((line = br.readLine()) != null){
			sb.append(line).append("\r\n");
		}
		JNIMethod.header = sb.toString();
	}

	@SuppressWarnings("resource")
	private static String getDeclarationLine(String cppHeader) throws IOException {
		BufferedReader br = new BufferedReader(new FileReader(cppHeader));
		String line;
		while((line = br.readLine()) != null){
			if(HeaderUtil.isDeclarationLine(line)){
				return line;
			}
		}
		throw new RuntimeException("不是ndk-build生成的头文件!");
	}
	
	@SuppressWarnings("resource")
	private static String getClassLine(String cppHeader) throws IOException, IllegalClassFormatException {
		BufferedReader br = new BufferedReader(new FileReader(cppHeader));
		String line;
		while((line = br.readLine()) != null){
			if(HeaderUtil.isClassLine(line)){
				return line;
			}
		}
		throw new IllegalClassFormatException("找不到 \" * Class:\" 行");
	}

	private static void genFormatMap(String configFile) throws IOException {
		if(configFile == null){
			System.out.println("使用默认配置文件");
		}else{
			System.out.println("使用配置文件: "+configFile);
		}
		
		
		BufferedReader br;
		if(configFile == null){
			InputStream resourceAsStream = JNIMethod.class.getClassLoader().getResourceAsStream("com/header/jni_header.format");
			br = new BufferedReader(new InputStreamReader(resourceAsStream));
		}else{
			br = new BufferedReader(new FileReader(configFile));
		}
		
		String line;
		while((line = br.readLine()) != null){
			if(line.startsWith("#")){//注释
				continue;
			}
			
			regx_replace_map.put(line, br.readLine());
		}
	}

	private static LinkedHashMap<String, String> regx_replace_map = new LinkedHashMap<String, String>();
	private static String header = new String();

}
