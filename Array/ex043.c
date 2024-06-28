#include<stdio.h>
#include<string.h>
main()
{
	char str[] = "orange";
	int cut;
	cut = 0;
	while (str[cut]!='\0'){
		cut++;
	}
	printf("•¶š—ñ:%s\n", str);
	printf("•¶š”‚Í%d•¶š\n", cut);
	printf("•¶š”‚Í%d•¶š\n", strlen(str));
}