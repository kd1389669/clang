#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i, s;
	int d[10] = { 10,5,30,77,16,3,47,29,37,33 };
	printf("�T���ls�����");
	scanf("%d",& s);
	for ( i = 0; i < 10; i++)
	{
		if (s==d[i])
		{
			break;
		}
	}
	if (i==10)
	{
		printf("������Ȃ�����\n");
	}
	else
	{
		printf("%d\n", i);
	}
}