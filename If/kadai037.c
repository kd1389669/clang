#include<stdio.h>
main()
{
	int su;
	printf("0～100までの整数？");
	scanf("%d", &su);
	if (su>=90)
	{
		printf("その数値の判定結果は「5」です");
	}
	else
	{
		if (su>=80)
		{
			printf("その数値の判定結果は「4」です");
		}
		else
		{
			if (su >= 50)
			{
				printf("その数値の判定結果は「3」です");
			}
			else
			{
				if (su >= 30)
				{
					printf("その数値の判定結果は「2」です");
				}
				else
				{	
					printf("その数値の判定結果は「1」です");
					
				}
			}
		}
	}
}