#include<stdio.h>
main()
{
	float a, b;
	printf("2�̎����l?");
	scanf("%f%f", &a, &b);
	if (a>b)
	{
		printf("�傫���ق���=%f", a);
	}
	else
	{
		printf("�傫���ق���=%f", b);
	}
}