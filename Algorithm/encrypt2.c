#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int k[21];
	char s[21];
	int i, n;
	printf("������s�����");
	scanf("%s", &s[0]);
	srand(time(0));
	for ( i = 0; s[i]!='\0'; i++)
	{
		k[i] = rand() % 6;
		s[i] = s[i] + k[i];
	}
	printf("�Í����������%s\n", s);
	printf("�Í����L�[��,");
	for ( n = 0; n < i; n++)
	{
		printf("%d",k[n]);
	}
}