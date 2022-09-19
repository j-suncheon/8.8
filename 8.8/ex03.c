#include <stdio.h>
#include "bi.h"
#define HIGH 0x7FFFFFFF
#define LOW 0x80000000
int rcs(int num, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (num > 0)
		{
			if ((num & 1) == 0)
			{
				num >>= 1;
			}
			else
			{
				num = (num >> 1) | LOW;
			}
		}
		else
		{
			if ((num & 1) == 0)
			{
				num = (num >> 1) & HIGH;
			}
			else
			{
				num >>= 1;
			}
		}
	}
	return num;
}

int main()
{
	int num, n;

	scanf("%d %d", &num, &n);

	bi(num);
	num = rcs(num, n);
	bi(num);

	return 0;
}
//int rcs(int num, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		int ch = 1;
//		
//		if ((num & ch) == 0)
//		{
//			num = (num >> 1) & HIGH;
//		}
//		else
//		{
//			num = (num >> 1) | LOW;
//		}
//	}
//	return num;
//}


