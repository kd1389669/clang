#include<stdio.h>
main()
{
	int su, ji,kotae;
	printf("”‚ğ“ü‚ê‚Ä:");
	scanf("%d", &su);
	ji = 0;
	while (ji<=10){
		kotae = su + ji;
		printf("%d+%d=%d\n",su,ji,kotae);
		ji++;
	}
} 