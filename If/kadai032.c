#include<stdio.h>
main()
{
	int a,su;
	printf("整数?");
	scanf("%d",&a);
	if (a%2 == 1)
	{
		printf("その数は偶数です");
	}
	else
	{
		printf("その数は奇数です");
	}
}