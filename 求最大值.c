#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main685()
{
	int arr[10];
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	int max;
	max = arr[0] > arr[1] ? arr[0] : arr[1];
	for (int k = 2; k < 10; k++)
	{
		max = max > arr[k] ? max : arr[k];
	}
	for (int j = 0; j < 10; j++)
	{
		printf("%d\n", arr[j]);
	}
	printf("****************\n");
	printf("%d\n", max);
	return 0;
}