#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main0012()
{
	int a;
	scanf("%d",&a);
	if (a >= 2)
	{
		int b = a - 1;
		for (int i = 2; i <= a; i++)
		{
			for (int j = 2; j <= sqrt(i); j++)
			{
				if (i % j == 0)
				{
					b--;
					break;
				}
			}
		}
		printf("%d\n", b);
	}
	else
		printf("0");
	return EXIT_SUCCESS;
}