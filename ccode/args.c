#include <stdio.h>
#include <stdarg.h>
void print(int num,...)
{
    int i=0;
    va_list li;
    va_start(li,num);
    for(i=0;i<num;++i)
    {
        printf("%d ",va_arg(li,int));
    }
    puts("");
    va_end(li);

    va_start(li,num);
    for(i=0;i<num;++i)
    {
        printf("%d ",va_arg(li,int));
    }
    puts("");
    va_end(li);
}
int main()
{
    print(3,1,2,3);
    return 0;
}
