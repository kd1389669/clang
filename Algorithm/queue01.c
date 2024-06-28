#include<stdio.h>
#define QUEUESIZE 8
int queue[QUEUESIZE];
int head = 0;
int tail = 0;
void display(void);
int enqueue(int d);
int dequeue(int* pd);
main()
{
	int key, data, result;
	do {
		printf("\n\n���G���L���[��i�A�f�L���[��o����͂���>");
		key = getche();
		printf("\n");
		//�v�b�V������
		if (key == 'i') {
			printf("�f�[�^����>");
			scanf("%d", &data);
			result = enqueue(data);
			if (result == -1) {
				printf("\n�������L���[����t�ł�������\n");
			}
			else {
				display();
			}
		}
		//�|�b�v����
		if (key == 'o') {
			result = dequeue(&data);
			if (result == -1) {
				printf("\n�������L���[����ł�������\n");
			}
			else {
				printf("�L���[����f�[�^(%d)�����o���܂���\n", data);
				display();
			}
		}
	} while (key != 'e');
}
/* �X�^�b�N�\���֐� */
void display(void)
{
	int i;
	printf("\n===���݂̃L���[�̓��e===\n");
	for (i = 0; i < QUEUESIZE; i++) {
		printf("queue[%2d]��%5d", i, queue[i]);
		if (i == head) {
			printf("��head�������Ă��鏊(����head��%d)", head); //�m�F�p
		}
		if (i == tail) {
			printf("��tail�������Ă��鏊(����tail��%d)", tail); //�m�F�p
		}
		printf("\n");
	}
	return;
}

/* �X�^�b�N�Ƀf�[�^��ς�(�v�b�V������)�֐� */
int enqueue(int d)
{
	if ((tail+1)%QUEUESIZE==head) { return -1; } //�X�^�b�N����t�̂Ƃ�
	queue[tail] = d;
	tail++;
	return 0;
}
/* �X�^�b�N����f�[�^�����o��(�|�b�v����)�֐� */
int dequeue(int* pd)
{
	if (head == tail) { return -1; } //�X�^�b�N����̂Ƃ�
	*pd = queue[head];
	queue[head] = 0; //�m�F���₷�����邽��
	head++;
	head = head % QUEUESIZE;
	return 0;
}