#include<stdio.h>
main()
{
	int su;
	printf("”•b‚ğ“ü—Í:");
	scanf("%d", &su);

		if (su <= 5000) {
			int ji, fun;
			ji = su / 3600;
			su = su % 3600;
			fun = su / 60;
			su = su % 60;
			printf("%dŠÔ%d•ª%d•b‚Å‚·\n", ji, fun, su);
		}
		else
		{
			printf("ƒGƒ‰[");
		}
}