#include<stdio.h>
main()
{
int num, i, j;
printf("êîÇÕ?");
scanf("%d", &num);
i = 0;
do {
	j = 0;
	do{
		printf(" ");
		j++;
	} while (j < num - i+1);
	do {
		j = 0;
		num = i + 1;
		do {
			printf("*");
			j++;
		} while (j < num - i);
		printf("\n");
		i--;
	} while (i > 0);
	j = 0;
	do {
		printf("*");
		j++;
	} while (j < i + 1);
	printf("\n");
	i++;
} while (i < num);
}