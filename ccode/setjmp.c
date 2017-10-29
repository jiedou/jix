/*
C函数库提供了setjmp()和longjmp()函数，它们分别承担非局部标号和goto作用。
头文件<setjmp.h>申明了这些函数及同时所需的jmp_buf数据类型。
1.setjmp(j)设置“jump”点，用正确的程序上下文填充jmp_buf对象j。这个上下文包括程序存放位置、栈和框架指针，
其它重要的寄存器和内存数据。当初始化完jump的上下文，setjmp()返回0值。
2. 以后调用longjmp(j,r)的效果就是一个非局部的goto或“长跳转”到由j描述的上下文处（也就是到那原来设置j的setjmp()处）。
当作为长跳转的目标而被调用时，setjmp()返回r或1（如果r设为0的话）。（记住，setjmp()不能在这种情况时返回0。）
*/

#include <setjmp.h>
#include <stdio.h>
jmp_buf j;

void raise_exception(void)
{
	printf("exception raised\n");
	longjmp(j, 2); /* jump to exception handler */
	printf("this line should never appear\n");
}



int main()
{

        int retcode=setjmp(j);
	if (retcode==0)
	{
		printf("\''setjmp\'' is initializing \''j\''\n");
		raise_exception();
		printf("this line should never appear\n");
	}
	else
	{
		printf("''setjmp'' was just jumped into,retcode=%d\n",retcode);
		/* this code is the exception handler */
	}
    return 0;
}


