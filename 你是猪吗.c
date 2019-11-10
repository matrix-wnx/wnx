#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main2351()
{
	int i;
	char a[10];
	printf("马世枭你是猪么？\n");
c:
	scanf("%s",a);
	 i = strcmp("是", a);
	if (i == 0)
	{
		printf("猪你好！\n");
	}
	else
	{
		printf("再想想！\n");
		goto c;
	}
	return 0;
}