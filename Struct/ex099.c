#include<stdio.h>
#define DATA_END -1
struct ken
{
	int code;
	char name[20];
	struct ken* next;
};
main()
{
	struct ken ken_data[] = {{1,"kCΉ",NULL},{2,"ΒX§",NULL},{3,"βθ§",NULL},
	{4,"{ι§",NULL},{5,"Hc§",NULL},{6,"R`§",NULL},{7,"ͺ§",NULL},{DATA_END,"",NULL} };
	struct ken* p, * wp;
	p = wp = ken_data;
	do
	{
		p++;
		wp->next = p;
		wp = p;
	} while (p->code!=DATA_END);
	//ΒXΜnexto[Μlπ{ιΜAhXΙΟX
	p = ken_data;
	p++;
	p->next = p + 2;
	for (p = ken_data; p->code != DATA_END; p = p->next) {
		printf("code=%d name=%s\n", p->code, p->name);
	}
}