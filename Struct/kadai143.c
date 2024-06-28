#include<stdio.h>
struct fruit {
	char name[30];
	int price;
	int point;
	int number;
	int total;
};
main()
{
	int i;
	struct fruit kudamono = { "peach",300,5,3,0 };
	kudamono.total = kudamono.price * kudamono.number;
	printf("è§ïiñº:%s\n", kudamono.name);
	printf("âøäi:%dâ~\n", kudamono.price);
	printf("Ç®ëEÇﬂìx:");
	for (i = 0; i < kudamono.point; i++){
		printf("Åô ");
	}
	printf("\nå¬êî:%då¬\n", kudamono.number);
	printf("ã‡äz:\\%d-\n", kudamono.total);
}