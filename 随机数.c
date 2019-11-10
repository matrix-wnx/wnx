#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main64311()
{
	srand((size_t)time(NULL));
	int abc[7] = { 0 };
	for (int i = 0; i <= 6; i++)
	{
		abc[i] = rand() % 7 + 1;
		
		for (int j = 0; j < i; j++)
		{
			if (abc[i] == abc[j])
			{
				i--;
				break;
			}
		}
	}
	/*
	int j = 1;
	int l;
	while (j != 0)
	{
		j = 0;
		for (l = 0; l < sizeof(abc) / sizeof(abc[0]); l++)
		{
			if (abc[l] >= abc[l + 1]) {}
			else
			{
				int a = abc[l];
				abc[l] = abc[l + 1];
				abc[l + 1] = a;
				j++;
			}
		}
	}*/
	for (int k = 0; k < sizeof(abc) / sizeof(abc[0]); k++)
	{
		printf("%d ", abc[k]);
	}
	return 0;
}