#define _CRT_SECURE_NO_WARNINGS

#include"slist.h"
void slprint(slistnode* phead) {
	slistnode* cur = phead;
	while (cur != NULL) {
		printf("%d", cur->data);
		cur = cur->next;
	}

}
slistnode* creatlist(slistdatatype x) {//创建一个节点
	slistnode* newnode = (slistnode*)malloc(sizeof(slistnode));//应该创建一个结构体的空间，而不是指针的空间
	if (newnode == NULL) {
		printf("申请失败");
		exit(-1);
	}
	newnode->data = x;
	newnode->next = NULL;
	return newnode;
}
void slpushback(slistnode** pphead, slistdatatype x) {

	slistnode* newnode = creatlist(x);
	if (*pphead == NULL) {//判断链表是否为空
		*pphead = newnode;//头指针指向第一个节点
	}
	else {
		slistnode* cur = *pphead;
		while (cur->next != NULL) {//找尾
			cur = cur->next;
		}
		cur->next = newnode;
	}



}
void slpopback(slistnode** pphead) {//尾删
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
		cur = NULL;//有问题
		prev->next = NULL;
	}
}
