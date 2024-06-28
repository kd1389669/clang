#include<stdio.h>
main()
{
	int i, k=0,su;
	printf("®”");
	scanf("%d",& k);
	su = k + 10;
	for ( i = k; i <= su; i++,k++)
	{
		printf("%d ",k);
	}
}