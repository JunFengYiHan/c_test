#define _CRT_SECURE_NO_WARNINGS

#include"slist.h"
void slprint(slistnode* phead) {
	slistnode* cur = phead;
	while (cur != NULL) {
		printf("%d", cur->data);
		cur = cur->next;
	}

}
slistnode* creatlist(slistdatatype x) {//����һ���ڵ�
	slistnode* newnode = (slistnode*)malloc(sizeof(slistnode));//Ӧ�ô���һ���ṹ��Ŀռ䣬������ָ��Ŀռ�
	if (newnode == NULL) {
		printf("����ʧ��");
		exit(-1);
	}
	newnode->data = x;
	newnode->next = NULL;
	return newnode;
}
void slpushback(slistnode** pphead, slistdatatype x) {

	slistnode* newnode = creatlist(x);
	if (*pphead == NULL) {//�ж������Ƿ�Ϊ��
		*pphead = newnode;//ͷָ��ָ���һ���ڵ�
	}
	else {
		slistnode* cur = *pphead;
		while (cur->next != NULL) {//��β
			cur = cur->next;
		}
		cur->next = newnode;
	}



}
void slpopback(slistnode** pphead) {//βɾ
	if (*pphead == NULL) {
		return;
	}
	else if ((*pphead)->next == NULL) {
		free(*pphead);
		*pphead = NULL;
	}
	else {
		slistnode* prev = NULL;
		slistnode* cur = *pphead;
		while (cur->next != NULL) {
			prev = cur;
			cur = cur->next;
		}
		free(cur);
		cur = NULL;//������
		prev->next = NULL;
	}
}
