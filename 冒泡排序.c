#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define size 3
int main5674()
{
	int abc[size];
	for (int i = 0; i < sizeof(abc) / sizeof(abc[0]); i++)
	{
		scanf("%d", &abc[i]);
	}
	int j = 1;
	int l;
	while (j != 0)
	{
		j = 0;
		for (l = 0; l < sizeof(abc)/sizeof(abc[0]); l++)
		{
			if (abc[l] >= abc[l + 1]){}
			else
			{
				int a = abc[l];
				abc[l] = abc[l + 1];
				abc[l + 1] = a;
				j++;
			}
		}
	}
	for (int k = 0; k < sizeof(abc) / sizeof(abc[0]); k++)
	{
		printf("%d ", abc[k]);
	}
	return 0;
}