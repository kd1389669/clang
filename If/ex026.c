#include<stdio.h>
main()
{
	int su;
	printf("�������:");
	scanf("%d", &su);
	if ((((su == 4) || su == 6) || su == 9) || su == 11){
		printf("�ŏI����30���ł�\n");
	}
	else{
		if (su == 2) {
			printf("�ŏI����28���ł�\n");
		}
		else {
			printf("�ŏI����31���ł�\n");
		}
	}
}