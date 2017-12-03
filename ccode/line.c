#include <stdio.h>
#ifndef __func__
    char *p="func not define";
#else
    char *p="func define";
#endif

int main()
{
    puts(p);
    printf("func:%s\n",__func__);
    printf("line:%d\n",__LINE__);
    return 0;
}
