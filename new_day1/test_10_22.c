#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	char ch = 0;
	char password[20] = { 0 };
	printf("请输入密码:>");
	scanf("%s", password);

	while ((ch = getchar()) != '\n')
	{
		;
	}
	printf("请输入Y/N:>");
	char ret = getchar();
	if ((ret == 'Y') || (ret == 'y'))
	{
		printf("确认密码!");
	}
	else
	{
		printf("放弃确认!");
	}

	return 0;

}