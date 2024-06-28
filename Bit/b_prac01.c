#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define Skil_Num 3
#define Mob_Num 3
enum BitState
{
	Base = 0,			//00000000 通常状態
	Poison=1<<0,		//00000001 どく状態
	Sleep = 1<<1,		//00000010 ねむり状態
	Paraysis = 1<<2,	//00000100 まひ状態
	Burn = 1<<3,		//00001000 やけど状態
	AtkUp = 1<<4,		//00010000 攻撃力アップ状態
	AtkDown = 1<<5,		//00100000 攻撃力ダウン状態
};
typedef unsigned int UINT;
void DisplayStatus(UINT s);
void ChangeFlg(UINT* s);
void ClearFlag(UINT* s);

typedef struct {
	char name[20]; //スキル名
	int type;	   //スキルの種類
	int use_mp;    //使用MP量
	int effect;    //スキル効果
}Skill;
typedef struct {
	char name[20]; //名前
	int hp;        //HP
	int atk;	   //攻撃力
	int def;       //防御力
	UINT state;    //状態
}Spec;
typedef struct {
	Spec sp;	//Spec型構造体変数
	int maxhp;	//最大HP
	int mp;		//MP
	Skill skl[Skil_Num]; //Skill型構造体配列
}Chara;
typedef struct {
	Spec sp;	//Spec型構造体変数
	int rate;  //
}Mob;

main()
{
	UINT MyState = Base;
	ChangeFlg(&MyState);
	DisplayStatus(MyState);
	ClearFlag(&MyState);
	DisplayStatus(MyState);
}

void DisplayStatus(UINT s){
	printf("****現在の状態****\n");
	if (s & Poison){
		printf("毒\n");
	}
	if (s & Sleep) {
		printf("睡眠\n");
	}
	if (s & Paraysis) {
		printf("麻痺\n");
	}
	if (s & Burn) {
		printf("火傷\n");
	}
	if (s & AtkUp) {
		printf("攻撃力アップ\n");
	}
	if (s & AtkDown) {
		printf("攻撃力ダウン\n");
	}
	if (s == Base) {
		printf("通常状態\n");
	}
	printf("******************\n");
}
void ChangeFlg(UINT* s) {
	int a;
	while (1){
		printf("どの状態にしますか?\n");
		printf("1:毒 2:睡眠 3:麻痺 4:火傷 5:攻撃↑ 6:攻撃↓ 0:終了>");
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
		printf("どの状態を解除しますか?\n");
		printf("1:毒 2:睡眠 3:麻痺 4:火傷 5:攻撃↑ 6:攻撃↓ 7:全解除 0:終了>");
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