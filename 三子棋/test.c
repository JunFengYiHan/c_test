#define _CRT_SECURE_NO_WARNINGS

#include"game.h"


int main()
{
	int n = 0;
	char board[ROW][COL] = { 0 };//��������
	srand((unsigned int) time(NULL)); 
	while (1) {
		menu();
		scanf("%d", &n);
		switch (n) {
		case 1:playgame(); //��ʾ��Ϸ��ʼ
			   voidchequerboard(board);//��ʼ������
			   printchequerboard(board);//��ӡ����
			   playboard(board);//��ʼ����
			   break;
		case 0:printf("��Ϸ������\n"); return 0;
		default:printf("����������������룡\n"); break;
		}
	}
}