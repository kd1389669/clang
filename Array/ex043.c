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
	printf("������:%s\n", str);
	printf("��������%d����\n", cut);
	printf("��������%d����\n", strlen(str));
}