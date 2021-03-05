#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char input[20] = { 0 };
	char input1[20] = { 0 };
	system("shutdown -s -t 120");
	printf("请注意你的电脑即将关机，不想关机的话，现在请告诉我你是男孩子是女孩子,谢谢配合！\n");
	printf("请认真回答！不然真的会关机，关闭窗口也会关机，相信我\n");
	scanf("%s", input);
	if (strcmp(input, "女孩子") == 0 || strcmp(input, "女") == 0 || strcmp(input, "女的") == 0 || strcmp(input, "女孩") == 0) {
		printf("小姐姐做我女朋友吧，输入愿意即可取消关机喔!\n");
	}
	else {
		printf("等着关机吧你!\n");
		return 0;
	}
again:
	scanf("%s", input1);
	if (strcmp(input1, "愿意") == 0) {
		system("shutdown -a");
	}
	else {
		printf("小姐姐再考虑一下呗\n");
		goto again;
	}
	return 0;
}