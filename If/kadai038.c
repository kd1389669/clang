#include<stdio.h>
main()
{
	char mo;
	printf("���������:");
	scanf("%c", &mo);
	if (mo>='A'&&mo<='Z'){
		printf("�ϊ������%c\n", mo + 0x20);
	}
	else{
		if (mo >= 'a' && mo <= 'z') {
			printf("�ϊ������%c\n", mo - 0x20);
		}
		else {
			printf("%c",mo);
		}
	}
}