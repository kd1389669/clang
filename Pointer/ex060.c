#include<stdio.h>
main()
{
	char su,data[15] = "Language";
	char* p_data=data;
	int i;
	printf("data[]=%s\n", data);
	printf("検索文字は?");
	scanf("%c", &su);
	printf("検索結果は");
	i = 0;
		while (*(p_data+i))
		{
			if (su==*(p_data+i))
			{
				printf("%d ",i+1);
			}
			i++;
		}
	printf(" 文字目です");

}