#define _CRT_SECURE_NO_WARNINGS

#include"RetroSnaker.h"

int main()
{
	//initgraph(640, 480);//图像大小
	//setbkcolor(RGB(37, 37, 38));//设置背景颜色
	//cleardevice();//清屏
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