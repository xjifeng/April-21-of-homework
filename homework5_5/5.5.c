#include <stdio.h>
//使用递归计算n的k次方；
long ping(int n,int k)
{
	if (k <= 0)
	{
		return 1;
	}
	else
	{
		return n * ping(n, k - 1);
	}
}
int main()
{
	int a = 0;
	int b = 0;
	scanf_s("%d %d", &a, &b);
	printf("%ld", ping(a, b)) ;

	return 0;
}
//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和  例如，调用DigitSum(1729)，则应该返回1+7+2+9，它的和是19  输入：1729，输出：19 
int digitsum(int n)
{
	int sum = 0;
	int m = 0;
	if (n!=0)
	{
		m = n % 10;
		n = n / 10;
		sum = m + digitsum(n);
	}
	return sum;
}
int main()
{
	int a = 0;
	printf("请输入一个数：");
	scanf_s("%d", &a);
	printf("%d", digitsum(a));

	return 0;
}
//编写一个函数 reverse_string(char * string)（递归实现）
//
//实现：将参数字符串中的字符反向排列，不是逆序打印。
//
//要求：不能使用C函数库中的字符串操作函数。
void reverse_string(char* string)
{
	if (*string!='\0')
	{
		string++;
		reverse_string(string);
		printf("%c", *(string - 1));
	}
}
int main()
{
	char* arr = "abcdefg";
	reverse_string(arr);
	return 0;
}
//递归算法
int strl(char* string)
{
	int lengh = 0;
	if (*string!='\0')
	{
		return 1 + strl(string + 1);
	}
	return 0;
	
}
int main()
{
	char arr[] = "dsjlasjdlkasdl";
	/*scanf_s("%c", &arr);*/
	int ret = strl(arr);
	printf("%d", ret);
	return 0;
}
//非递归算法
int strl(char* string)
{
	int x = 0;
	while (*string!='\0')
	{
		*string++;
		x++;
	}
	return x;
}
int main()
{
	char ch[] = { "saldhjasodhabodboasdjaslkdj" };
	int result = strl(ch);
	printf("%d", result);
	return 0;
}
//递归阶乘
int factorial(int n)
{
	if (n==1)
	{
		return 1;
	}
	else
	{
		return n * factorial(n - 1);
	}

}
int main()
{
	int a = 0;
	scanf_s("%d", &a);
	printf("%d", factorial(a));
	return 0;
}
//非递归阶乘
void factorial(int n)
{
	int i;
	int sum = 1;
	for ( i= n; i > 0; i--)
	{
		sum = sum * i;
		n--;
	}
	printf("%d", sum);
}
int main()
{
	int a = 0;
	scanf_s("%d", &a);
	factorial(a);
	return 0;
}
//将整数分割
void sss(int n)
{
	if (n>9)
	{
		sss(n / 10);
	}
	printf("%d ", n % 10);
}
int main()
{
	int a = 0;
	scanf_s("%d", &a);
	sss(a);
	return 0;
}