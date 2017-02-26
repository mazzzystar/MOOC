/*
本节课程名：命令行参数。
本程序内容：一个简单的使用命令行参数的例子，能帮助弄清argc和argv
*/
#include <stdio.h>
int main(int argc, char * argv[])
{
    /*
    argc: 代表程序启动时，命令行参数的个数，因程序本身文件名也算1，
    故argc的值至少是1
    argv：指针数组，每个元素都是一个char*类型指针，指向一个字符串（也就
    是命令行参数）
    */
    for(int i = 0; i < argc; i++)
        printf("%s\n", argv[i]);
    return 0;
}

//操作方法：编译成点exe后在cmd中输入命令行
