#include<stdio.h>
main()
{
	int max_score, score = 0;
	FILE* fp;
	char max_name[20], ch, name[20];
	if (fp = fopen("score.txt", "r")) {
		fscanf(fp, "%s%d", max_name, &max_score);
		fclose(fp);
		printf("�ō����_�@���O:%s �n�C�X�R�A:%d\n", max_name, max_score);
	}
	else
	{
		printf("�t�@�C�����ǂݎ��܂���!\n");
		return;
	}
	printf("�v���C���[�������:");
	scanf("%s", name);
	while (1){
		printf("���݂̃X�R�A:%d('e'�ŏI��)\n",score);
		ch = getch();
		if (ch=='e'){
			break;
		}
		score++;
	}
	if (max_score < score) {
		if (fp = fopen("score.txt", "w")) {
			fprintf(fp, "%s\n%d\n", name, score);
			fclose(fp);
			printf("�n�C�X�R�A�X�V!\n");
		}
		else{
			printf("�t�@�C�����ǂݎ��܂���!\n");
			return;
		}
	}
}