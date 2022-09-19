#include <stdio.h>
#include "bi.h"

int lcs(int num, int n)
{
	int ch = 0x80000000;
	for (int i = 0; i < n; i++)
	{
		if ((num & ch) != 0)
		{
			num = (num << 1) | 1;
		}
		else
		{
			num = num << 1;
		}
	}
	return num;
}

int main()
{
	int num, n;
	scanf("%d %d", &num, &n);
	bi(num);
	num = lcs(num, n);
	bi(num);

	return 0;
}