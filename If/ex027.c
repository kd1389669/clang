#include<stdio.h>
main()
{
	char mo;
	printf("文字を入力:");
	scanf("%c", &mo);
	if (mo>='A'&&mo<='Z'){
		printf("変換すると%c\n", mo + 0x20);
	}
	else{
		if (mo >= 'a' && mo <= 'z') {
			printf("変換すると%c\n", mo - 0x20);
		}
		else {
			printf("エラー");
		}
	}
}