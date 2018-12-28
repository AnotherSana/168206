#include <stdio.h>


int main()
{
	int a, b, c, d;// 穷举, a,b,c,d要么是小偷，要么不是
	for (a = 1; a >= 0; a--)
	{
		for (b = 1; b >= 0; b--)
		{
			for (c = 1; c >= 0; c--)
			{
				for (d = 1; d >= 0; d--)
				{
					if ((!a) + b + d + (!d) == 3 && a + b + c + d == 1)
					{
						printf("a:%d, b:%d, c:%d, d:%d 其中数值为1的是小偷\n", a, b, c, d);
					}
				}
			}
		}
	}

	getchar();

	return 0;
}
