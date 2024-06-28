#include<stdio.h>
int kurabe(int a, int b);
main()
{
	int a, b,max;
	printf("‚Q‚Â‚Ì®”?");
	scanf("%d%d", &a, &b);
	printf("max=%d", kurabe(a, b));
}
int kurabe(int a,int b) {
	int ku;
	if (a>=b)
	{
		ku = a;
	}
	else
	{
		ku = b;
	}
	return(ku);
}