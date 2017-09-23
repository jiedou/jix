/*
    位操作运算符例子
*/
#include <stdio.h>

int main()
{
    int a=1;
    unsigned int b=1;
    printf("a=%d,b=%d\n",a,b);  
   
    int c=0xffffffff;
    unsigned int d=0xffffffff;
    printf("c=%d,d=%d\n",c,d);  
    printf("c=%u,d=%u\n",c,d);  
    printf("~c=%d\n",~c);
    printf("~c=%u\n",~c);
    printf("~d=%d\n",~d);
    printf("~d=%u\n",~d);
    return 0;
}
