#include<stdio.h>
#define sol_Num 3

typedef struct 
{
	char wname[20];
	int bullet;
	float atk;
} wepon;
typedef struct
{
	char name[20];
	int hp;
	wepon wpn;
} soldier;
void SetInfo(soldier* s, char* filename);
void Display(soldier* s);
main()
{
	soldier sols[sol_Num];
	SetInfo(sols, "file04.txt");
	Display(sols);
}
void SetInfo(soldier* s, char* filename)
{
	FILE* fp;
	int i;
	if (fp = fopen(filename, "r")) {
		for (i = 0; i < sol_Num; i++)
		{
			fscanf(fp, "%s%d%s%d%f", (s + i)->name, &(s + i)->hp, (s + i)->wpn.wname, &(s + i)->wpn.bullet, &(s + i)->wpn.atk);
		}
		fclose(fp);
	}
}
	void Display(soldier * s)
	{
		int i;
		for ( i = 0; i < sol_Num; i++)
		{
			printf("%s\t‘Ì—Í:%d\n", (s + i)->name, (s + i)->hp);
			printf("•Ší:%s\t’e”:%d\tUŒ‚—Í:%.2f\n", (s + i)->wpn.wname, (s + i)->wpn.bullet, (s + i)->wpn.atk);
		}	
	}
