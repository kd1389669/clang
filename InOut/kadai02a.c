#include<stdio.h>
main()
{
	double su, suu, wa, sa, syou, seki;
	su = 0;
	suu = 0;
	printf("2‚Â‚ÌÀ”’l?");
	scanf("%lf%lf", &su,&suu);
	printf("***%lf‚Æ%lf‚Ìl‘¥‰‰Z***\n",su,suu);
	wa = su + suu;
	sa = su - suu;
	syou = su * suu;
	seki = (su + suu) / 2;
	printf("˜a=%f\n ·=%f\n Ï=%f\n ¤=%f\n", wa, sa, syou, seki);
}