#include<stdio.h>
void atai(int x, int y, int z, int* max, int* smol);
main()
{
	int x, y, z,max,smol;
	printf("整数を３つ入力:");
	scanf("%d%d%d",&x,&y,&z);
	atai(x, y, z, &max, &smol);
	printf("最大値=%d 最小値=%d\n", max, smol);
}
void atai(int x, int y, int z, int* max, int* smol) {
	*max = (x > y) ? (x > z ? x : z) : (y > z ? y : z);
	*smol = (x < y) ? (x < z ? x : z) : (y < z ? y : z);
	return;
}