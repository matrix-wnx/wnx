#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main2351()
{
	int i;
	char a[10];
	printf("������������ô��\n");
c:
	scanf("%s",a);
	 i = strcmp("��", a);
	if (i == 0)
	{
		printf("����ã�\n");
	}
	else
	{
		printf("�����룡\n");
		goto c;
	}
	return 0;
}