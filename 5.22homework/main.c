#include <stdio.h>
//指针打印数组内容
int main()
{
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	for ( i = 0; i < 10; i++)
	{
		printf("%d ", *(a + i));
	}
	return 0;
}
//reverse数组内容
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
void reverse(char* str){
	int len = strlen(str);
	char* left = str;
	char* right = str + len - 1;
	while (left<right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
int main() {
	char input[10000] = { 0 };
	gets(input);
	reverse(input);
	printf("%s", input);
	return 0;
}
#include <stdio.h>
/*打印*
     ***
	*****
	...
*/
int main()
{
	int n;
	scanf("%d",&n);
	int i, j, k;
	for (i = 1; i <= n; i++)
	{
		for (j = 0; j < n - i; j++)
		{
			printf(" ");
		}
		for (k = 0; k < 2 * i - 1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	for ( i = n-1; i > 0; i--)
	{
		for ( j = n-i; j >0; j--)
		{
			printf(" ");
		}
		for  (k = 2*i-1; k >0; k--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
//100000以为水仙花
#include <stdio.h>
#include <math.h>
int count(int n)
{
	int count = 1;
	while (n/10!=0)
	{
		n = n / 10;
		count++;
	}
	return count;
}
int is_narcissus(int i, int n)
{
	int tmp = n;
	int sum = 0;
	while (n!=0)
	{
		sum += pow(i % 10, tmp);
		n--;
		i = i / 10;
	}
	return sum;
}

int main()
{
	int i = 0;
	for ( i = 0; i < 100000; i++)
	{
		int n = count(i);
		if (i==is_narcissus(i,n))
		{
			printf("%d\n", is_narcissus(i, n));
		}
	}

	return 0;
}
//a+aa+aaa+aaaa+aaaa
int fun(int n, int a)
{
	int num = 0;
	while (n>0)
	{
		num = num * 10 + a;
		n--;
	}
	return num;
}
int main()
{
	int input = 0;
	scanf("%d", &input);
	if (input>0&&input<10)
	{
		int sn = 0;
		int i = 0;
		for ( i = 1; i <=5; i++)
		{
			sn = sn + fun(i, input);
		}
		printf("%d\n", sn);
	}
	return 0;
}