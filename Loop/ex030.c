#include<stdio.h>
main()
{
	int su, ji,kotae;
	printf("数を入れて:");
	scanf("%d", &su);
	ji = 0;
	while (ji<=10){
		kotae = su + ji;
		printf("%d+%d=%d\n",su,ji,kotae);
		ji++;
	}
} 