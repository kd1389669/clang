#include <stdio.h>
main()
{
	int no, no1,gokei;
	printf("1つ目の整数:");
	scanf("%d", &no);
	printf("２つ目の整数:");
	scanf("%d", &no1);
	gokei = no + no1;
	printf("合計は%dです\n", gokei);
}