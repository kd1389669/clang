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
		printf("���i��:%s\n", kudamono[i].name);
		printf("���i:%d�~\n", kudamono[i].price);
		printf("���E�ߓx:");
		for (j = 0; j < kudamono[i].point; j++) {
			printf("�� ");
		}
		printf("\n��:%d��\n", kudamono[i].number);
		printf("���z:\\%d-\n", kudamono[i].total);
	}
	printf("���v���z=\\%d-\n",total);
}