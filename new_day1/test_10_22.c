#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	char ch = 0;
	char password[20] = { 0 };
	printf("����������:>");
	scanf("%s", password);

	while ((ch = getchar()) != '\n')
	{
		;
	}
	printf("������Y/N:>");
	char ret = getchar();
	if ((ret == 'Y') || (ret == 'y'))
	{
		printf("ȷ������!");
	}
	else
	{
		printf("����ȷ��!");
	}

	return 0;

}