#include <stdio.h>
//乘法口诀
int num(int input){
int i = 0;
int n = 0;
int mult = 0;
for (i = 1; i <= input; i++)
{
	for (n = 1; n <= i; n++)
	{
		mult = i * n;
		printf("%d*%d=%d ", i, n, mult);
	}
	printf("\n");
}
}
int main()
{
	int a = 0;
	scanf_s("%d", &a);
	num(a);
	return 0;
}
//指针交换两个数字
int tmp = 0;
int swap(int* x, int* y)
{
	tmp = *x;
	*x = *y;
	*y = tmp;
	printf("%d %d", *x, *y);
}
int main()
{

	int* a;
	int* b;
	scanf_s("%d %d", &a, &b);
	swap(&a, &b);
	
	return 0;
}
#include <stdio.h>
//判断闰年
int leap(int x)
{
	if ((x % 4 == 0 && x % 100 != 0) || x % 400 == 0)
	{
		printf("%d is leap year", x);
	}
	else
	{
		printf("%d not a leap year",x);
	}
}
int main()
{
	int year = 0;
	printf("Pls enter year:");
	scanf_s("%d", &year);
	leap(year);
	return 0;
}
#include <stdio.h>
#include <math.h>
//判断素数
void prime()
{
	int i = 0;
	int j = 0;
	
	for ( i = 100; i <= 200; i++)
	{
		for (j = 2; j < sqrt(i); j++)
		{
			if (i % j == 0)
			{
				break;
			}
			else
			{
				printf("%d ", i);
				break;
			}
			
		}
		
	}
	
}
int main()
{
	prime();
	return 0;
}