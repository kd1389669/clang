#include<stdio.h>
main()
{
	int i,k=0;
	for ( i = 1; i < 61; i++)
	{
		printf("%d ", i);
		k++;
		if (k>=20)
		{
			k = 0;
			printf("\n");
		}
	}
}