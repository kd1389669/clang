#include<stdio.h>
main()
{
	int ia, ib, ta, hi, ka, wa;
	printf("2�̐��l?");
	scanf("%d%d", &ia&ib);
	printf("***%d��%d�̎l�����Z***");
	ta = ia + ib;
	hi = ia-ib;
	ka = ia * ib;
	wa = (ia / ib);
	printf("%d+%d=%d", ia, ib, ta);
	printf("%d-%d=%d", ia, ib, hi);
	printf("%d*%d=%d", ia, ib, ka);
	printf("%d/%d=%d", ia, ib, wa);
}