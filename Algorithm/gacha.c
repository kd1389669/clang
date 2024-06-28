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
			printf("スーパレア\n");
		}
		else
		{
			if (kazu <= 100)
			{
				printf("レア\n");
			}
			else
			{
				printf("ノーマル\n");
			}
		}
	}
	
}