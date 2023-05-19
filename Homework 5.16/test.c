#include <stdio.h>
//不使用临时变量对换位置
int main()
{
	int a = 5;
	int b = 3;
	printf("%d %d\n", a, b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("%d %d", a, b);
	return 0;
}

//打印二进制 1 的个数
int find(int x)
{
	int count = 0;
	while (x!=0)
	{
		count++;
		x = x & (x - 1);
	}
	return count;
}

int main()
{
	int input = 0;
	scanf_s("%d", &input);
	printf("%d", find(input));

}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void printbit(int a)
{
	int i = 0;
	for ( i = 31; i >=1; i-=2)
	{
		printf("%d ", (a >> i) & 1);
	}
	printf("\n");
	for ( i = 30; i >= 0; i-=2)
	{
		printf("%d ", (a >> i) & 1);
	}
}

int main()
{
	int input = 0;
	scanf_s("%d", &input);
	printbit(input);

	return 0;
}
