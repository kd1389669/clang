#include<stdio.h>
main()
{
	int su, o, t;
	printf("‰‰Zq‚ğ“ü—Í:");
	scanf("%d", &su);
	if (su == 1, 2, 3, 4) {
		if (su == 1) {
			printf("‚Q‚Â‚Ì®”‚ğ“ü—Í");
			scanf("%d%d", &o, &t);
			printf("%d\n", o + t);
		}
		else {
			if (su == 2) {
				printf("‚Q‚Â‚Ì®”‚ğ“ü—Í");
				scanf("%d%d", &o, &t);
				printf("%d\n", o - t);
			}
			else {
				if (su == 3) {
					printf("‚Q‚Â‚Ì®”‚ğ“ü—Í");
					scanf("%d%d", &o, &t);
					printf("%d\n", o * t);
				}
				else {
					if (su == 4) {
						printf("‚Q‚Â‚Ì®”‚ğ“ü—Í");
						scanf("%d%d", &o, &t);
						printf("%d\n", o / t);
					}
					else {
						printf("–³—");
					}
				}
			}

		}
	}
}