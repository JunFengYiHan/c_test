#define _CRT_SECURE_NO_WARNINGS


#include"slist.h"

int main(void) {
	slistnode* plist = NULL;//ͷָ��

	slpushback(&plist, 1);//���봫��ַ���ܸı�ֵ
	slpushback(&plist, 2);
	slpushback(&plist, 3);
	slpopback(&plist);
	//slpushfront(&plist, 4);
	//slpushfront(&plist, 5);
	//slpophfront(&plist);
	slprint(plist);
	return 0;
}