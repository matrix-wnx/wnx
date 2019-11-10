#include<stdio.h>
int main15412()
{
	for (float y = 1.3f; y > -1.3f; y -= 0.1f)
	{
		for (float x = -1.3f;x < 1.3f;x += 0.05f)
		{
			float a = x * x + y * y - 1;
			if (a * a * a - x * x * y * y * y <= 0.0f)
				putchar('*');
			else
				putchar(' ');
		}
		putchar('\n');
	}
	return 0;
}