#include<stdio.h>
main()
{
	int k, i,su;
	i = 0;
	k = 0;
	printf("数を入れて");
	scanf("%d", &su);
	for (; su != -999;) {
		k += su;
		i++;
			printf("数を入れて");
		scanf("%d", &su);
	}
		if (i != 0) {
			printf("合計=%d 平均=%.2f", k, (float)k / i);
		}

}