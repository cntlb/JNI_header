
#小工具,只是为了方便生成大的`JNINativeMethod`数组

输入文件(由ndk-build自动生成的native方法头文件),格式如下
```c++
/*
 * Class:     com_example_ScriptManager
 * Method:    nativeAddItemInventory
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_com_example_ScriptManager_nativeAddItemInventory
  (JNIEnv *, jclass, jint, jint, jint);
```

通过使用默认的格式化替换文件中的配置,替换成以下的格式:
```c++
{"nativeAddItemInventory", "(III)V", (void*)&nativeAddItemInventory},
```

可批量拷贝生成`JNINativeMethod`数组,用于本地方法的注册

#使用方法
```
E:\workspace\eclipse\JNI_header\exe>jni-method.bat ScriptManager.h -o a.h
input file: ScriptManager.h
使用默认配置文件
==========================================================
* SUCCESS!
* saved at: E:\workspace\eclipse\JNI_header\exe\a.h
==========================================================
"-help" for more options
```

```cpp
//比较大的数组
JNINativeMethod methods[] = {
	//拷贝JNINativeMethod结构到此
    {"nativeAddFurnaceRecipe", "(III)V", (void*)&nativeAddFurnaceRecipe},
    {"nativeAddItemChest", "(IIIIIII)V", (void*)&nativeAddItemChest},
    {"nativeAddItemCreativeInv", "(III)V", (void*)&nativeAddItemCreativeInv},
    {"nativeAddItemFurnace", "(IIIIIII)V", (void*)&nativeAddItemFurnace},
    {"nativeAddItemInventory", "(III)V", (void*)&nativeAddItemInventory},
    ...
    {"nativePlayerGetSpeed", "()F", (void*)&nativePlayerGetSpeed}
}

jclass scriptmanager_class;
JNIEXPORT jint JNI_OnLoad(JavaVM *vm, void *reserved) {
    JNIEnv * env;
    vm->GetEnv((void**) &env, JNI_VERSION);
    jclass tmp = env->FindClass("com/example/ScriptManager");
    scriptmanager_class = (jclass)env->NewGlobalRef(tmp);
    //Register Native methods
    env->RegisterNatives(bl_scriptmanager_class, methods, sizeof(methods)/ sizeof(JNINativeMethod));
    return JNI_VERSION;
}

```

##欢迎fork,start和merge request

#附:默认格式化文件,可自定义
jni_header.format
```
##注释
#去除包名
#Java_com_example_ScriptManager_
#
#去除/*部分
/\*\r\n

#去除注释*/部分
\*/\r\n

#去除Class:行
.*Class:.*\r\n

#构造JNINativeMethod, "Method:"后面的文字加引号
#name
.*Method:\s*(\S*)
\{"$1",
#签名 signature
.*Signature:\s*(\S*)
"$1",
#地址 fnPtr
.*JNICALL\s*(\S*)
\(void*\)&$1
#去除参数列表,JNINativeMethod结束
.*JNIEnv.*;.*
\},
#格式化
,\r\n
, 
(\{.*)\r\n
$1
```
