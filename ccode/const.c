/*
c语言中指针常量:不能改变指向，但可以改变指向的内容。
       常量指针:不能改变指向内容，但可以改变指向指向。
       可以通过强转的方法改变指针常量的指向。
       
*/
#include <stdio.h>

int main()
{
    char * const p1="hello,world";// 指针常量
    char p_arr[20]="this is array";
    // p1=p_arr  //error
    // *(char*)p1='x'; // 通过强转的方式试图改变指向内容，编译过程没问题，但运行过程中会报段错误
    printf("p1[0]=%c\n",p1[0]);
    *((char**)&p1)=p_arr;
    puts(p1);
    return 0;
}
