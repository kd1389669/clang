#include<stdio.h>
main()
{
	int gokei, ia,i;
	gokei = 0;
	printf("��������");
	scanf("%d", &ia);
	while (ia!=-999){
		gokei += ia;
		i++;
		printf("��������");
		scanf("%d", &ia);
	}
	printf("���v=%d\n", gokei);
	printf("����=%.2f\n", ((float)gokei)/i);
}