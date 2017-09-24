/*
   记录所用虚机上各种类型所占字节的大小
   运行结果:
   sizeof(int)=4
   sizeof(int*)=8
   sizeof(char)=1
   sizeof(float)=4
   sizeof(double)=8
   sizeof(long)=8
   sizeof(long long)=8
*/
#include <stdio.h>

int main()
{
    printf("sizeof(int)=%u\n",(unsigned int)sizeof(int));
    printf("sizeof(int*)=%u\n",(unsigned int)sizeof(int*));
    printf("sizeof(char)=%u\n",(unsigned int)sizeof(char));
    printf("sizeof(float)=%u\n",(unsigned int)sizeof(float));
    printf("sizeof(double)=%u\n",(unsigned int)sizeof(double));
    printf("sizeof(long)=%u\n",(unsigned int)sizeof(long));
    printf("sizeof(long long)=%u\n",(unsigned int)sizeof(long long));
    return 0;
}
