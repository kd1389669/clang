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
	struct fruit* p;
	p = kudamono;
	for ( i = 0; i < 3; i++){
		(p + i)->total = (p + i)->price * (p + i)->number;
		total += (p + i)->total;
		printf("���i��:%s\n", (p + i)->name);
		printf("���i:%d�~\n", (p + i)->price);
		printf("���E�ߓx:", (p + i)->point);
		printf("\n��:%d��\n", (p + i)->number);
		printf("���z:\\%d-\n", (p + i)->total);
	}
	printf("���v���z=\\%d-\n",total);
}