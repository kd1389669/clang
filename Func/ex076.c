#include<stdio.h>
void get_sumavg(int x, int y,int *go,float *he);
main()
{
	int a, b, c;
	float d;
	printf("整数を２つ入力:");
	scanf("%d%d", &a, &b);
	get_sumavg(a, b, &c, &d);
	printf("合計は%d,平均は%.2f\n", c, d);
}
void get_sumavg(int x, int y, int* go,float* he) {
	*go = x + y;
	*he = (x+ y) / 2;
	return;
}