#include<stdio.h>
#define SIZE 5
main()
{
	int d[] = { 30,7,25,16,10 };
	int i, j, w;
	i = 0;
	for (i = 4; i >0; i--) {
		for (j = 0; j < i; j++) {
			if (d[j] > d[j+1]) {
				w = d[j];
				d[j] = d[j+1];
				d[j+1] = w;
			}

		}

	}
	for (i = 0; i < SIZE; i++) {
		printf("d[%d]=%d\n", i, d[i]);
	}
}