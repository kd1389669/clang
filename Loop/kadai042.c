#include<stdio.h>
main()
{
	int su, san, k,i;
	san = 0;
	k = 0;
	su = 0;
	while (san<=300){
		su += 1;
		san += su;
		k++;
	}
	su = 1;
	for ( i = 0; i < k; i++,su++){
		printf("%d+", su);
	}
	printf("=%d", san);
}