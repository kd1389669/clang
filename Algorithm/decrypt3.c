#include<stdio.h>
main()
{
	int k[21];
	char s[21];
	int i = 0;
	printf("文字列sを入力:");
	scanf("%s",&s[0]);
	while (s[i]!='\0'){
		printf("s[%d]の復号キー>", i);
		scanf("%d", &k[i]);
		s[i] -= k[i];
		i++;
	}
	printf("復号化文字列は,%s", s);
}