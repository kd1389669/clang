#include<stdio.h>
main()
{
	char s[20];
	int i = 0;
	printf("ˆÃ†‰»•¶š—ñ‚ğ“ü—Í:");
	scanf("%s", &s[0]);
	while (s[i]!='\0')
	{
		s[i] -= 1;
		i++;
	}
	printf("•¡†‰»•¶š—ñ%s‚ğ•\¦\n", s);
}