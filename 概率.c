#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main7683()
{
	srand((size_t)time(NULL));
	int a=0,b=0,c=0,d=0,e = 0;
	int arr[10000] = { 0 };
	for (int i = 0; i <10000; i++)
	{
		arr[i]=rand() % 5 + 1;
		switch (arr[i])
		{
		case 1:
			a++;
			break;
		case 2:
			b++;
			break;
		case 3:
			c++;
			break;
		case 4:
			d++;
			break;
		case 5:
			e++;
			break;
		}
	}
	printf("%f\n%f\n%f\n%f\n%f", (double)a/10000, (double)b/10000, (double)c/10000, (double)d/10000, (double)e/10000);
	return 0;
}