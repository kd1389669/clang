#include<stdio.h>
#include<string.h>
void syou(int tbl[], int cnt);
void kou(int tbl[], int cnt);
main(){
	int data[8] = { 6,10,8,2,9,5,1,7 },i;
	char s[128];
	printf("�\�[�g���������:");
	scanf("%s",s);
	if (strcmp(s, "����") == 0) { syou(data, 8); }
	if (strcmp(s, "�~��") == 0) { kou(data, 8); }
	for (i = 0; i < 8; i++){
		printf("%d ", data[i]);
	}
}
void syou(int tbl[], int cnt) {
	int i, j, w;
	for ( i = 0; i < cnt; i++){
		for ( j = i+1; j <cnt; j++){
			if (tbl[i]>tbl[j])
			{
				w = tbl[j];
				tbl[i] = tbl[j];
				tbl[j] = w;
			}
		}
	}
	
}
void kou(int tbl[], int cnt) {
	int i, j, w;
	for (i = 0; i < cnt; i++) {
		for (j = i + 1; j < cnt; j++) {
			if (tbl[i] < tbl[j]){
				w = tbl[j];
				tbl[i] = tbl[j];
				tbl[j] = w;
			}
		}
	}
}