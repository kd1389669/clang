#include<stdio.h>
main()
{
	int su;
	printf("月を入力:");
	scanf("%d", &su);
	if ((((su == 4) || su == 6) || su == 9) || su == 11){
		printf("最終日は30日です\n");
	}
	else{
		if (su == 2) {
			printf("最終日は28日です\n");
		}
		else {
			printf("最終日は31日です\n");
		}
	}
}