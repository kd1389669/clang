#include<stdio.h>
int kurabe(char a);
main()
{
	char a;
	printf("アルファベット１文字?");
	scanf("%c",&a);
	if (kurabe(a)==0)
	{
		printf("小文字\n");
	}
	else
	{
		printf("大文字\n");
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