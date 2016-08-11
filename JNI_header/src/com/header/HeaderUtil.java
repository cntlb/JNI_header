package com.header;

public class HeaderUtil {
    private static final String KEY_EQUAL = "=";
    private static final String JNIEXPORT = "JNIEXPORT";
    
    /**
     *  "* Class:     com_mcpelauncher_ScriptManager"
     */
    public static boolean isClassLine(String line) {
    	return line!=null && line.contains("Class:");
    }
       
    /**
     * "* Class:     com_ScriptManager" ==> Java_com_ScriptManager_
     * @param line
     * @return
     */
    public static String getDefaultMethodPrefix(String line) {
    	return "Java_"+line.trim().replaceAll("\\s*\\**\\s*Class:\\s*(\\S*)", "$1")+"_";
    }
    
    /**
     *  "JNIEXPORT void JNICALL Java_com_ScriptManager_nativeAddFurnaceRecipe"
     */
    public static boolean isDeclarationLine(String line) {
    	return line!=null && line.contains(JNIEXPORT);
    }
        
    /**
     * 获取形如:"JNIEXPORT void JNICALL Java_com_ScriptManager_nativeAddFurnaceRecipe"
     * 行的字符串Java_com_ScriptManager_nativeAddFurnaceRecipe部分
     * @param line 任意字符串、文件的一行文本
     */
    public static String getFullJNIMethodName(String line) {
		return line.trim().replaceAll("JNIEXPORT.*JNICALL\\s*(\\S*)", "$1");
    }

    public static String guessMethodPrefix(String fullJNIMethodName) {
        //按照_分割字符串,根据标准的包名和类名判断函数前缀
        //如:Java_com_exam_1_1pl_1e_Hello_g_1e_1_1t_1_1_1Age
        //对应 com.exam__pl_e.Hello.g_e__t___Age方法
        //因此,先将_1(包名或者方法名中的_)替换为java标识符中不可能存在的=
        //再按_分割,判断分割后的元素如果满足lastpackage.ClassName.method
        //的风格(包名小写,类名首字母大写及和类名、方法名遵循驼峰命名规则)
        //由此取出method的前缀
        fullJNIMethodName = fullJNIMethodName.replace("_1", KEY_EQUAL);//_1 => =
        String[] split = fullJNIMethodName.split("_");
        StringBuilder sb = new StringBuilder("Java_");
        //Java_pack_Class_method
        if(split.length<4){
            throw new RuntimeException("函数名不符合规则,请使用 -p 选项指定完整类名");
        }
        if(split.length>0 && "Java".equals(split[0])){
            for (int i = 1; i<split.length-2; i++){
                if(!startWithUpper(split[i]) && startWithUpper(split[i+1])
                        && !startWithUpper(split[i+2])){
                    sb.append(split[i]).append("_")
                            .append(split[i+1]).append("_");
                    break;
                }
                sb.append(split[i]).append("_");
            }
        }

        return sb.toString().replaceAll(KEY_EQUAL,"_1");
    }

    /**
     * com.example ==> Java_com_example_
     */
    public static String getMethodPrefix(String packageName) {
        packageName = packageName.replaceAll("_", KEY_EQUAL);
        packageName =  packageName.replaceAll("\\.", "_");
        return "Java_"+packageName.replaceAll(KEY_EQUAL, "_1")+"_";
    }

    private static boolean startWithUpper(String s) {
        if(s == null || s.trim().equals("")){
            return false;
        }
        return (s.charAt(0)>='A') && (s.charAt(0)<='Z');
    }

//    public static void main(String args[]) throws ParseException {
//        String fullJNIMethodName = getFullJNIMethodName("JNIEXPORT void JNICALL Java_com_ScriptManager_nativeAddFurnaceRecipe");
//        System.out.println(fullJNIMethodName);
//        String methodPrefix = HeaderUtil.getDefaultMethodPrefix(fullJNIMethodName);
//        System.out.println(methodPrefix);
//    }

}
