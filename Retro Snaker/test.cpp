#define _CRT_SECURE_NO_WARNINGS

#include"RetroSnaker.h"

int main()
{
	//initgraph(640, 480);//ͼ���С
	//setbkcolor(RGB(37, 37, 38));//���ñ�����ɫ
	//cleardevice();//����
	//Snaker snaker[SNAKER] = { 0 };

	do{
		menu();
		switch (_getch()) {
		case '1':
			break;
		case '0':
			break;
		}
	} while ( );
	return 0;
}