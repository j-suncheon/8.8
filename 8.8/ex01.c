#include <stdio.h>

void bi(int);			//함수 선언


int main()
{
	int num;
	scanf("%d", &num);
	bi(num);				//함수 콜링
	return 0;
}

void bi(int num)				//함수 정의
{
	for (int i = 0; i < 32; i++)
	{
		int ch = 1;
		ch = ch << (31-i);
		if ((num & ch)==0)
		{
			printf("0");
		}
		else
		{
			printf("1");
		}
		if ((i+1)%4==0)
		{
			printf(" ");
		}
	}
}