#include<stdio.h>
main()
{
	int su, o, t;
	printf("演算子を入力:");
	scanf("%d", &su);
	if (su == 1, 2, 3, 4) {
		if (su == 1) {
			printf("２つの整数を入力");
			scanf("%d%d", &o, &t);
			printf("%d\n", o + t);
		}
		else {
			if (su == 2) {
				printf("２つの整数を入力");
				scanf("%d%d", &o, &t);
				printf("%d\n", o - t);
			}
			else {
				if (su == 3) {
					printf("２つの整数を入力");
					scanf("%d%d", &o, &t);
					printf("%d\n", o * t);
				}
				else {
					if (su == 4) {
						printf("２つの整数を入力");
						scanf("%d%d", &o, &t);
						printf("%d\n", o / t);
					}
					else {
						printf("無理");
					}
				}
			}

		}
	}
}