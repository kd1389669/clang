#include<stdio.h>
main()
{
	int su, o, t;
	printf("���Z�q�����:");
	scanf("%d", &su);
	if (su == 1, 2, 3, 4) {
		if (su == 1) {
			printf("�Q�̐��������");
			scanf("%d%d", &o, &t);
			printf("%d\n", o + t);
		}
		else {
			if (su == 2) {
				printf("�Q�̐��������");
				scanf("%d%d", &o, &t);
				printf("%d\n", o - t);
			}
			else {
				if (su == 3) {
					printf("�Q�̐��������");
					scanf("%d%d", &o, &t);
					printf("%d\n", o * t);
				}
				else {
					if (su == 4) {
						printf("�Q�̐��������");
						scanf("%d%d", &o, &t);
						printf("%d\n", o / t);
					}
					else {
						printf("����");
					}
				}
			}

		}
	}
}