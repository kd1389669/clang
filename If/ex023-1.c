#include<stdio.h>
main()
{
	int su;
	printf("数秒を入力:");
	scanf("%d", &su);
	if (su < 0) {
		printf("マイナスはエラーです");
	}
	else{

		if (su <= 5000) {
			int ji, fun;
			ji = su / 3600;
			su = su % 3600;
			fun = su / 60;
			su = su % 60;
			printf("%d時間%d分%d秒です", ji, fun, su);
		}
		else{
			printf("エラー");
		}
	}
}