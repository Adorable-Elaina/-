#include <stdio.h>

int main(void)
{
	int a = 123;

	int b = 246;

	printf("a的值为:%d\n", a);

	printf("b的值为:%d\n", b);
	
	a = b + 114514;
	
	printf("变化后a的值为:%d\n", a);

	return 0;
}