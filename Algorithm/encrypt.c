#include<stdio.h>
main()
{
	char s[20];
	int i;
	printf("����������:");
	scanf("%s", &s[0]);
	i = 0;
	while (s[i]!='\0')
	{
		s[i] = s[i] + 1;
		i++;
	}
	printf("�Í���������%s��\��\n",s);
}