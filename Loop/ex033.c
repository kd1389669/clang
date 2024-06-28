#include<stdio.h>
main()
{
	int k, i,su;
	i = 0;
	k = 0;
	printf("”‚ğ“ü‚ê‚Ä");
	scanf("%d", &su);
	for (; su != -999;) {
		k += su;
		i++;
			printf("”‚ğ“ü‚ê‚Ä");
		scanf("%d", &su);
	}
		if (i != 0) {
			printf("‡Œv=%d •½‹Ï=%.2f", k, (float)k / i);
		}

}