#include<stdio.h>
main()
{
	int tbl[][3] = { {10,20,30},{40,50,60},{70,80,90} };
	int* p_tbl, i,j;
	p_tbl = tbl[0];
	p_tbl = tbl[1];
	printf("2ŽŸŒ³”z—ñtbl‚Ì“à—e\n");
		for (j = 0; j <3; j++)
		{
			printf(" %d", *p_tbl++);
		}
}