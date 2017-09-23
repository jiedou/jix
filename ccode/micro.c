/*
  这个例子展示了一个如何使用一个宏实现，
  将一个函数替换为另一个函数
  输出结果:
  $ gcc micro.c -D A=1 && a.out 
  test_f()
  $ gcc micro.c  && a.out 
  f()
*/
#include <stdio.h>

void test_f()
{
	puts("test_f()");
}

void f()
{
	puts("f()");
}

#ifdef A
    #define f() test_f()
#endif

int main()
{
	f();
    return 0;
}
