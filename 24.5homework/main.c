#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
 
int main()
{

	int qs_price = 1;
	int amount = 20;
	int empty = amount;
	int total = amount;
	while (empty>=2)
	{
		total += empty / 2;
		empty = empty / 2 + empty % 2;
	}
	printf("你可以喝%d瓶汽水 ", total);
	return 0;
}
