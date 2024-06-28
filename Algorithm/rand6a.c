#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int play,bot;
	srand(time(0));
	bot = rand() % 2;
	printf("何を出しますか？\n");
	printf("(1:グー 2:チョキ 3:パー)> ");
	scanf("%d", &play);
	play -= 1;
	if (play==0)
	{
		printf("プレイヤーは、グーです。\n");
	}
	else
	{
		if (play==1)
		{
			printf("プレイヤーは、チョキです。\n");
		}
		else
		{
			if (play==2)
			{
				printf("プレイヤーは、パーです。\n");
			}
		}
	}
	if (bot == 0)
	{
		printf("コンピューターは、グーです。\n");
	}
	else
	{
		if (bot== 1)
		{
			printf("コンピューターは、チョキです。\n");
		}
		else
		{
			
			if (bot==2)
			{
				printf("コンピューターは、パーです。\n");
			}
		}
	}
	if (play == bot){
		printf("引き分け\n");
	}
	if ((play+1)%3==bot){
		printf("プレイヤーの勝ち\n");
	}
	if ((bot+1)%3==play){
		printf("コンピューターの勝ち\n");
	}
}