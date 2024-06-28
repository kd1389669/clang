#include<stdio.h>
main()
{
	int i, j,s;
	printf("”‚ÍH");
	scanf("%d", &i);
	s = i+1;
	do{
		j = 0;
		do{
			printf("*");
			j++;
		} while (j<s-i);
		printf("\n");
		i--;
	} while (i>0);
}