#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int su,i;
	srand(time(0));
	for ( i = 0; i < 101; i++)
	{
		su = rand() % 300 + 1;
		printf("%d ", su);
	}
}