#include<stdio.h>
main()
{
	char s[20];
	int i;
	printf("文字列を入力:");
	scanf("%s", &s[0]);
	i = 0;
	while (s[i]!='\0')
	{
		s[i] = s[i] + 1;
		i++;
	}
	printf("暗号化文字列%sを表示\n",s);
}