#include<stdio.h>
main()
{
	int i,zet;
	char k;
	zet = 'z';
	printf("アルファベット小文字");
	scanf("%c", &k);
	for (i = 0;i<=zet; i++, k++)
	{
		printf("%c", k);
	}
}