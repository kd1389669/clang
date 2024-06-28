#include<stdio.h>
main()
{
	int gokei, ia,i;
	gokei = 0;
	printf("”‚ğ“ü‚ê‚Ä");
	scanf("%d", &ia);
	while (ia!=-999){
		gokei += ia;
		i++;
		printf("”‚ğ“ü‚ê‚Ä");
		scanf("%d", &ia);
	}
	printf("‡Œv=%d\n", gokei);
	printf("•½‹Ï=%.2f\n", ((float)gokei)/i);
}