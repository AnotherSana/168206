#include <stdio.h>


int main()
{
	int a, b, c, d;// ���, a,b,c,dҪô��С͵��Ҫô����
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
						printf("a:%d, b:%d, c:%d, d:%d ������ֵΪ1����С͵\n", a, b, c, d);
					}
				}
			}
		}
	}

	getchar();

	return 0;
}
