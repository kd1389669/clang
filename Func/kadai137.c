#include<stdio.h>
int kurabe(char a);
main()
{
	char a;
	printf("�A���t�@�x�b�g�P����?");
	scanf("%c",&a);
	if (kurabe(a)==0)
	{
		printf("������\n");
	}
	else
	{
		printf("�啶��\n");
	}
}
int kurabe(char a) {
	if (a>='A'&&a>='Z'){
		return(0);
	}
	else{
		return(1);
	}
}