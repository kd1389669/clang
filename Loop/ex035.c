#include<stdio.h>
main()
{
	int su, gokei;
	gokei = 0;
	while (1)
	{
		printf("数を入れて:");
		scanf("%d", &su);
		if (su == -999)	break;
		else
		{
			gokei += su;
		}
	}
	printf("合計=%d\n", gokei);
}