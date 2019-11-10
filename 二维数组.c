#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#define hang 3
#define lie 3
int main5437()
{
	int arr[hang][lie];
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]);i++)
	{
		for(int j = 0;j < sizeof(arr[0])/sizeof(arr[0][0]);j++)
			{
			scanf("%d", &arr[i][j]);
			}
	}
	printf("\n");
	for (int a = 0; a < sizeof(arr) / sizeof(arr[0]); a++)
	{
		for (int b = 0; b < sizeof(arr[0]) / sizeof(arr[0][0]); b++)
		{
			printf("%d ", arr[a][b]);
		}
		printf("\n");
	}
	return 0;
}