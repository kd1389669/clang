#include<stdio.h>
main()
{
	long su,ni,san,si;
	printf("整数?");
	scanf("%ld", &su);
	ni=su*2;
	san=su*3;
	si=su*4;
	printf("2倍すると%ld\n 3倍すると%ld\n 4倍すると%ld\n",ni,san,si);
}