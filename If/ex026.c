#include<stdio.h>
main()
{
	int su;
	printf("Œ‚ğ“ü—Í:");
	scanf("%d", &su);
	if ((((su == 4) || su == 6) || su == 9) || su == 11){
		printf("ÅI“ú‚Í30“ú‚Å‚·\n");
	}
	else{
		if (su == 2) {
			printf("ÅI“ú‚Í28“ú‚Å‚·\n");
		}
		else {
			printf("ÅI“ú‚Í31“ú‚Å‚·\n");
		}
	}
}