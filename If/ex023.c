#include<stdio.h>
main()
{
	int su;
	printf("���b�����:");
	scanf("%d", &su);

		if (su <= 5000) {
			int ji, fun;
			ji = su / 3600;
			su = su % 3600;
			fun = su / 60;
			su = su % 60;
			printf("%d����%d��%d�b�ł�\n", ji, fun, su);
		}
		else
		{
			printf("�G���[");
		}
}