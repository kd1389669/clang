#include<stdio.h>
main()
{
	int su, gokei;
	gokei = 0;
	while (1)
	{
		printf("��������:");
		scanf("%d", &su);
		if (su == -999)	break;
		else
		{
			gokei += su;
		}
	}
	printf("���v=%d\n", gokei);
}