#include<stdio.h>
void get_sumavg(int x, int y,int *go,float *he);
main()
{
	int a, b, c;
	float d;
	printf("�������Q����:");
	scanf("%d%d", &a, &b);
	get_sumavg(a, b, &c, &d);
	printf("���v��%d,���ς�%.2f\n", c, d);
}
void get_sumavg(int x, int y, int* go,float* he) {
	*go = x + y;
	*he = (x+ y) / 2;
	return;
}