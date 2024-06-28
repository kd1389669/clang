#include<stdio.h>
main()
{
	int k[21];
	char s[21];
	int i = 0;
	printf("•¶š—ñs‚ğ“ü—Í:");
	scanf("%s",&s[0]);
	while (s[i]!='\0'){
		printf("s[%d]‚Ì•œ†ƒL[>", i);
		scanf("%d", &k[i]);
		s[i] -= k[i];
		i++;
	}
	printf("•œ†‰»•¶š—ñ‚Í,%s", s);
}