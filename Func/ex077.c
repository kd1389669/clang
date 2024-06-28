#include<stdio.h>
void atai(int x, int y, int z, int* max, int* smol);
main()
{
	int x, y, z,max,smol;
	printf("®”‚ð‚R‚Â“ü—Í:");
	scanf("%d%d%d",&x,&y,&z);
	atai(x, y, z, &max, &smol);
	printf("Å‘å’l=%d Å¬’l=%d\n", max, smol);
}
void atai(int x, int y, int z, int* max, int* smol) {
	*max = (x > y) ? (x > z ? x : z) : (y > z ? y : z);
	*smol = (x < y) ? (x < z ? x : z) : (y < z ? y : z);
	return;
}