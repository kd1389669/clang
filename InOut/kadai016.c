#include<stdio.h>
main()
{
	int ia, ib;
	ia = 100;
	ib = 7;
	printf("***%d��%d�̎l�����Z***\n", ia, ib);
	printf("%d+%d=%d\n", ia, ib, ia + ib);
	printf("%d-%d=%d\n", ia, ib, ia - ib);
	printf("%d*%d=%d\n", ia, ib, ia * ib);
	printf("%d/%d=%1.1f\n", ia, ib, ((float)ia / ib));
}