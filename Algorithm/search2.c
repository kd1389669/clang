#include<stdio.h>
main()
{
	int i, s;
	int d[10]={ 10,5,30,77,16,3,47,29,37,33}; 
	printf("探索値sを入力");
	scanf("%d",&s);
	d[10]=s;
	i = 0;
	while (s!=d[i])
	{
		i = i + 1;
	}
	if (i>=10)
	{
		printf("見つからなかった");
	}
	else
	{
		printf("%d", i);
	}
}