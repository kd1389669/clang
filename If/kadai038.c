#include<stdio.h>
main()
{
	char mo;
	printf("•¶Žš‚ð“ü—Í:");
	scanf("%c", &mo);
	if (mo>='A'&&mo<='Z'){
		printf("•ÏŠ·‚·‚é‚Æ%c\n", mo + 0x20);
	}
	else{
		if (mo >= 'a' && mo <= 'z') {
			printf("•ÏŠ·‚·‚é‚Æ%c\n", mo - 0x20);
		}
		else {
			printf("%c",mo);
		}
	}
}