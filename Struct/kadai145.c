#include<stdio.h>
struct fruit
{
	char name[30];
	int price, point, number, total;
};
main()
{
	int i,j,total=0;
	struct fruit kudamono[] = {{"peach", 300, 5, 3, 0},
	{ "grape",200,4,10,0 }, { "watermelon",1500,5,8,0 } };
	for ( i = 0; i < 3; i++)
	{
		kudamono[i].total = kudamono[i].price * kudamono[i].number;
		total += kudamono[i].total;
		printf("¤•i–¼:%s\n", kudamono[i].name);
		printf("‰¿Ši:%d‰~\n", kudamono[i].price);
		printf("‚¨‘E‚ß“x:");
		for (j = 0; j < kudamono[i].point; j++) {
			printf("™ ");
		}
		printf("\nŒÂ”:%dŒÂ\n", kudamono[i].number);
		printf("‹àŠz:\\%d-\n", kudamono[i].total);
	}
	printf("‡Œv‹àŠz=\\%d-\n",total);
}