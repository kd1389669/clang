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
	if (play==1)
	{
		printf("プレイヤーは、グーです。\n");
	}
	else
	{
		if (play==2)
		{
			printf("プレイヤーは、チョキです。\n");
		}
		else
		{
			if (play==3)
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
	if (play == 1 && bot == 0)
	{
		printf("引き分け\n");
	}
	if (play == 1 && bot == 1)
	{
		printf("プレイヤーの勝ち\n");
	}
	if (play == 1 && bot == 2)
	{
		printf("コンピューターの勝ち\n");
	}
	if (play == 2 && bot == 0)
	{
		printf("コンピューターの勝ち\n");
	}
	if (play == 2 && bot == 1)
	{
		printf("引き分け\n");
	}
	if (play == 2 && bot == 2)
	{
		printf("プレイヤーの勝ち\n");
	}
	if (play == 3 && bot == 0)
	{
		printf("プレイヤーの勝ち\n");
	}
	if (play == 3 && bot == 1)
	{
		printf("コンピューターの勝ち\n");
	}
	if (play == 3 && bot == 2)
	{
		printf("引き分け\n");
	}
}