#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int kazu,i;
	srand(time(0));
	for ( i = 0; i < 10; i++)
	{
		kazu = rand() % 1000;
		if (kazu <= 30) {
			printf("�X�[�p���A\n");
		}
		else
		{
			if (kazu <= 100)
			{
				printf("���A\n");
			}
			else
			{
				printf("�m�[�}��\n");
			}
		}
	}
	
}