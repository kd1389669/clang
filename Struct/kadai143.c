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
	printf("���i��:%s\n", kudamono.name);
	printf("���i:%d�~\n", kudamono.price);
	printf("���E�ߓx:");
	for (i = 0; i < kudamono.point; i++){
		printf("�� ");
	}
	printf("\n��:%d��\n", kudamono.number);
	printf("���z:\\%d-\n", kudamono.total);
}