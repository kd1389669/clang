#include<stdio.h>
main()
{
	double su, suu, wa, sa, syou, seki;
	su = 0;
	suu = 0;
	printf("2�̎����l?");
	scanf("%lf%lf", &su,&suu);
	printf("***%lf��%lf�̎l�����Z***\n",su,suu);
	wa = su + suu;
	sa = su - suu;
	syou = su * suu;
	seki = (su + suu) / 2;
	printf("�a=%f\n ��=%f\n ��=%f\n ��=%f\n", wa, sa, syou, seki);
}