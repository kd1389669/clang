#include<stdio.h>
main()
{
	int su, suu;
	printf("®”1?");
	scanf("%d", &su);
	printf("®”2?");
	scanf("%d", &suu);
	if (su>suu)
	{
		printf("%d‚Ì•û‚ª%d‚æ‚è%d‘å‚«‚¢",su,suu,(su-suu));
	}
	else
	{
		if (su==suu)
		{
			printf("%d‚Æ%d‚Í“™‚µ‚¢", su, suu);
		}
		else
		{
			printf("%d‚Ì•û‚ª%d‚æ‚è%d¬‚³‚¢", su, suu, -(su - suu));
		}
	}
}