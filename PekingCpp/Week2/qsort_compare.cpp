/*
本节课程名：函数指针
本程序介绍：老师安利function pointer多么有用，于是以重写qsort(快速排序)
中最后的那个参数(其实是一个比较2元素大小的函数指针）为例讲解。
*/
#include <stdio.h>
#include <stdlib.h>
#define NUM 5
int MyCompare(const void* elem1, const void* elem2)
{
    char *p1, *p2;
    p1 = (char *)elem1;  //将无类型的elem1强制转换成unsigned int
    p2 = (char *)elem2;
    /*
    比较函数规则： 如果*elem1应该排在*elem2前面，返回负整数,相等则0.
    */
    return int(*p2-*p1); //这里如果顺序颠倒,就是从大到小排序。
}

int main()
{
    char an[4] = {'a', 'C', 'A', 'h'};
    qsort(an, NUM, sizeof(char), MyCompare);
    for(int i=0; i<NUM; i++)
        printf("%c\t", an[i]);
    return 0;
}

