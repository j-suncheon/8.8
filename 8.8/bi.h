#include <stdio.h>


void bi(int num)				//�Լ� ����
{
	for (int i = 0; i < 32; i++)
	{
		int ch = 1;
		ch = ch << (31 - i);
		if ((num & ch) == 0)
		{
			printf("0");
		}
		else
		{
			printf("1");
		}
		if ((i + 1) % 4 == 0)
		{
			printf(" ");
		}
	}
	printf("\n");
}