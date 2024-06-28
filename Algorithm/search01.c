#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i, s;
	int d[10] = { 10,5,30,77,16,3,47,29,37,33 };
	printf("’Tõ’ls‚ğ“ü—Í");
	scanf("%d",& s);
	for ( i = 0; i < 10; i++)
	{
		if (s==d[i])
		{
			break;
		}
	}
	if (i==10)
	{
		printf("Œ©‚Â‚©‚ç‚È‚©‚Á‚½\n");
	}
	else
	{
		printf("%d\n", i);
	}
}