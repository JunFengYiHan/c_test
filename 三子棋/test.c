#define _CRT_SECURE_NO_WARNINGS

#include"game.h"

void game()
{
	char board[ROW][COL] = { 0 };//��������
	playgame(); //��ʾ��Ϸ��ʼ
	voidchequerboard(board);//��ʼ������
	printchequerboard(board);//��ӡ����
	playboard(board);//��ʼ����
}
int main()
{
	int n = 0;
	srand((unsigned int) time(NULL)); 
	while (1) {
		menu();
		scanf("%d", &n);
		switch (n) {
		case 1:game();
			   break;
		case 0:printf("��Ϸ������\n"); return 0;
		default:printf("����������������룡\n"); break;
		}
	}
	return 0;
}