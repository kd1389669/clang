//カウントUPバージョン
#include <stdio.h>
main()
{
	int num, i, j;
	printf("数は?");
	scanf("%d", &num);
	i = 0;
	do {
		j = 0;
		do {
			printf("*");
			j++;
		} while (j < i + 1);
		printf("\n");
		i++;
	} while (i < num);
}