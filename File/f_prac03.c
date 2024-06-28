#include<stdio.h>

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
void Display(soldier s);
main()
{
	soldier sol;
	SetInfo(&sol, "file03.txt");
	Display(sol);
}
void SetInfo(soldier* s, char* filename)
{
	FILE* fp;
	if (fp = fopen(filename, "r")) {
		fscanf(fp, "%s%d%s%d%f", s->name, &s->hp, s->wpn.wname, &s->wpn.bullet, &s->wpn.atk);
		fclose(fp);
	}
	void Display(soldier s) {
		printf("%s\t‘Ì—Í:%d\n", s.name, s.hp);
		printf("•Ší:%s\t’e”:%d\tUŒ‚—Í:%.2f\n", s.wpn.wname, s.wpn.bullet, s.wpn.atk);
	}
}