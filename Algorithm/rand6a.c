#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int play,bot;
	srand(time(0));
	bot = rand() % 2;
	printf("�����o���܂����H\n");
	printf("(1:�O�[ 2:�`���L 3:�p�[)> ");
	scanf("%d", &play);
	play -= 1;
	if (play==0)
	{
		printf("�v���C���[�́A�O�[�ł��B\n");
	}
	else
	{
		if (play==1)
		{
			printf("�v���C���[�́A�`���L�ł��B\n");
		}
		else
		{
			if (play==2)
			{
				printf("�v���C���[�́A�p�[�ł��B\n");
			}
		}
	}
	if (bot == 0)
	{
		printf("�R���s���[�^�[�́A�O�[�ł��B\n");
	}
	else
	{
		if (bot== 1)
		{
			printf("�R���s���[�^�[�́A�`���L�ł��B\n");
		}
		else
		{
			
			if (bot==2)
			{
				printf("�R���s���[�^�[�́A�p�[�ł��B\n");
			}
		}
	}
	if (play == bot){
		printf("��������\n");
	}
	if ((play+1)%3==bot){
		printf("�v���C���[�̏���\n");
	}
	if ((bot+1)%3==play){
		printf("�R���s���[�^�[�̏���\n");
	}
}