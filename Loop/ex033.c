#include<stdio.h>
main()
{
	int k, i,su;
	i = 0;
	k = 0;
	printf("��������");
	scanf("%d", &su);
	for (; su != -999;) {
		k += su;
		i++;
			printf("��������");
		scanf("%d", &su);
	}
		if (i != 0) {
			printf("���v=%d ����=%.2f", k, (float)k / i);
		}

}