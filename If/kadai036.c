#include<stdio.h>
main()
{
	int su, suu;
	printf("����1?");
	scanf("%d", &su);
	printf("����2?");
	scanf("%d", &suu);
	if (su>suu)
	{
		printf("%d�̕���%d���%d�傫��",su,suu,(su-suu));
	}
	else
	{
		if (su==suu)
		{
			printf("%d��%d�͓�����", su, suu);
		}
		else
		{
			printf("%d�̕���%d���%d������", su, suu, -(su - suu));
		}
	}
}