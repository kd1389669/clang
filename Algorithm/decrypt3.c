#include<stdio.h>
main()
{
	int k[21];
	char s[21];
	int i = 0;
	printf("������s�����:");
	scanf("%s",&s[0]);
	while (s[i]!='\0'){
		printf("s[%d]�̕����L�[>", i);
		scanf("%d", &k[i]);
		s[i] -= k[i];
		i++;
	}
	printf("�������������,%s", s);
}