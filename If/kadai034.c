#include<stdio.h>
main()
{
	char ch;
	printf("アルファベット?");
	scanf("%c", &ch);
	if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
		if (ch >= 'A' && ch <= 'Z')
		{
			printf("その文字は[大文字]です");
		}
		else
		{
			printf("その文字は[小文字]です");
		}
	}
		else {
			printf("ERROR\n");
		}
}