/*
本节课程名：函数指针。
定义形式: 类型名(* 指针变量名)(参数类型1，阐述类型2..)
例子：int (*pf)(int, char)
    表示pf是一个函数指针，它所指向的函数，返回值是int，
    该函数有2个参数，第一个是int类型,第二个是char类型。
*/

#include<stdio.h>
void PrintMin(int a, char b){
    if(a < b)
        printf("%d", a);
    else
        printf("%c", b);
}

int main(){
    void (*pf)(int, char);
    int x = 2000;
    char y = 'm';
    pf = PrintMin;
    pf(x, y);
    return 0;
}
