#include<stdio.h>
main()
{
	char ch;
	printf("�A���t�@�x�b�g?");
	scanf("%c", &ch);
	if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
		if (ch >= 'A' && ch <= 'Z')
		{
			printf("���̕�����[�啶��]�ł�");
		}
		else
		{
			printf("���̕�����[������]�ł�");
		}
	}
		else {
			printf("ERROR\n");
		}
}