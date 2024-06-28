#include<stdio.h>
enum BitState
{
	Base = 0,			//00000000 í èÌèÛë‘
	Poison=1<<0,		//00000001 Ç«Ç≠èÛë‘
	Sleep = 1<<1,		//00000010 ÇÀÇﬁÇËèÛë‘
	Paraysis = 1<<2,	//00000100 Ç‹Ç–èÛë‘
	Burn = 1<<3,		//00001000 Ç‚ÇØÇ«èÛë‘
	AtkUp = 1<<4,		//00010000 çUåÇóÕÉAÉbÉvèÛë‘
	AtkDown = 1<<5,		//00100000 çUåÇóÕÉ_ÉEÉìèÛë‘
};
typedef unsigned int UINT;
void DisplayStatus(UINT s);
void ChangeFlg(UINT* s);
void ClearFlag(UINT* s);
main()
{
	UINT MyState = Base;
	ChangeFlg(&MyState);
	DisplayStatus(MyState);
	ClearFlag(&MyState);
	DisplayStatus(MyState);
}

void DisplayStatus(UINT s){
	printf("****åªç›ÇÃèÛë‘****\n");
	if (s & Poison){
		printf("ì≈\n");
	}
	if (s & Sleep) {
		printf("êáñ∞\n");
	}
	if (s & Paraysis) {
		printf("ñÉ·É\n");
	}
	if (s & Burn) {
		printf("âŒèù\n");
	}
	if (s & AtkUp) {
		printf("çUåÇóÕÉAÉbÉv\n");
	}
	if (s & AtkDown) {
		printf("çUåÇóÕÉ_ÉEÉì\n");
	}
	if (s == Base) {
		printf("í èÌèÛë‘\n");
	}
	printf("******************\n");
}
void ChangeFlg(UINT* s) {
	int a;
	while (1){
		printf("Ç«ÇÃèÛë‘Ç…ÇµÇ‹Ç∑Ç©?\n");
		printf("1:ì≈ 2:êáñ∞ 3:ñÉ·É 4:âŒèù 5:çUåÇÅ™ 6:çUåÇÅ´ 0:èIóπ>");
		scanf("%d", &a);
		if (a == 0) {
			break;
		}
		switch (a){
		case 1:
			*s |= Poison;
			break;
		case 2:
			*s |= Sleep;
			break;
		case 3:
			*s |= Paraysis;
			break;
		case 4:
			*s |= Burn;
			break;
		case 5:
			*s |= AtkUp;
			break;
		case 6:
			*s |= AtkDown;
			break;
		}
	}
}
void ClearFlag(UINT* s) {
	int a;
	while (1){
		printf("Ç«ÇÃèÛë‘ÇâèúÇµÇ‹Ç∑Ç©?\n");
		printf("1:ì≈ 2:êáñ∞ 3:ñÉ·É 4:âŒèù 5:çUåÇÅ™ 6:çUåÇÅ´ 7:ëSâèú 0:èIóπ>");
		scanf("%d", &a);
		if (a == 0) {
			break;
		}
		switch (a){
		case 1:
			*s &= ~Poison;
			break;
		case 2:
			*s &= ~Sleep;
			break;
		case 3:
			*s &= ~Paraysis;
			break;
		case 4:
			*s &= ~Burn;
			break;
		case 5:
			*s &= ~AtkUp;
			break;
		case 6:
			*s &= ~AtkDown;
			break;
		case 7:
			*s = Base;
			break;
		}
	}
}