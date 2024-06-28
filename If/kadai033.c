#include<stdio.h>
main()
{
	char a;
	printf("アルファベット?");
	scanf("%s", &a);
	if (a=='A' ||a=='Z')
	{
		printf("その文字は[大文字]です");
	}
	else
	{
		printf("その文字は[小文字]です");
	}
}