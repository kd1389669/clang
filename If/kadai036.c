#include<stdio.h>
main()
{
	int su, suu;
	printf("整数1?");
	scanf("%d", &su);
	printf("整数2?");
	scanf("%d", &suu);
	if (su>suu)
	{
		printf("%dの方が%dより%d大きい",su,suu,(su-suu));
	}
	else
	{
		if (su==suu)
		{
			printf("%dと%dは等しい", su, suu);
		}
		else
		{
			printf("%dの方が%dより%d小さい", su, suu, -(su - suu));
		}
	}
}