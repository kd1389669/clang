#include<stdio.h>
main()
{
	char s[21],k[21];
	int i = 0;
	printf("文字列sを入力:");
	scanf("%s",&s[0]);
	printf("復号キーを入力>");
	scanf("%s", &k[0]);
	while (s[i]!='\0'){
		s[i] =s[i]- (k[i]-'0');
		i++;
	}
	printf("復号化文字列は,%s", s);
}