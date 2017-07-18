#include <jni.h>
#include <string>
#include <android/log.h>
#include <jni.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/inotify.h>
#include <unistd.h>
#include <time.h>
#include <dirent.h>

extern "C"
JNIEXPORT jint JNICALL
Java_com_example_susyimes_cmakeuninstallfeedback_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    int hello = 1;
    return env->(hello);
}


