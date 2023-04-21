#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//打印能被三整除的数
int main()
{
	int i = 0;
	for ( i = 1; i < 100; i++)
	{
		if (i%3==0)
		{
			printf("%d ", i);
		}
	}

	return 0;
}
//打印三个数从大到小排序
void main()
{
	
	int x, y, z, tmp;
	printf("请输入数字：");
	scanf_s("%d,%d,%d", &x, &y, &z);
	printf("输入的数字是：%d %d %d \n", x, y, z);
	if (x > y)
	{
		tmp = x;
		x = y;
		y = tmp;
	}
	if (x > z)
	{
		tmp = x;
		x = z;
		z = tmp;
	}
	if (y > z)
	{
		tmp = y;
		y = z;
		z = tmp;
	}
	printf("%d %d %d\n", z, y, x);
}
	// print between 100 and 200 prime number
int main()
{
	
	int i = 0;
	for ( i = 100; i < 200; i++)
	{
		int j = 0;
		for ( j = 2; j < i-1; j++)
		{
			if (i % j == 0)
			{
				break;
			}
			else;
			{
				printf("%d  ", i);
				break;
			}
			
		}
		
		
	}
	return 0;
}

//print between  1000 and 2000  leap year
int main()
{

	int i = 0;
	for ( i = 1000; i < 2000; i++)
	{
		if ((i%4==0 && i%100!=0)||i%400==0)
		{
			printf("%d ", i);
		}
	}
	return 0;
}
//print greatest common divisor(gcd)
int main() {
	

	int m = 0;
	int n = 0;
	printf("请输入两个数");
	scanf_s("%d %d", &m, &n);
	int k = 0;
	if (m > n)
	{
		k = m;
	}
	else if (m < n) 
	{
		k = n;
	}
	else
	{
		k = m;
	}
	while (1)
	{
		if (m%k==0 && n%k==0)
		{
			printf("%d", k);
			break;
		}
		else
		{
			k--;
		}
	}
}
//print 9*9 multiplication table
int main()
{
	int a = 0;
	int b = 0;
	for ( a = 1; a < 10; a++)
	{	
		int c = 0;
		for ( b = 1; b <= a; b++)
		{
			c = a * b;
			printf("%d*%d=%d ",b,a,c );
		}
		printf("\n");
	}
	return 0;
}
//print max of number 
int main()
{
	
	int max = 0;
	int i = 0;
	int arr[10];
	for ( i = 0; i < 10; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	max = arr[0];
	for ( i = 1; i < 10; i++)
	{
		if (arr[i]>max)
		{
			max = arr[i];
		}
	}
	printf("最大数为:%d\n", max);
	system("pause");
	//for ( i = 0; i < 10; i++)
	//{
	//}
	return 0;
 }
//print from 1 to 100 of exist 9 number
int main()
{
	
	int t = 0;
	int i = 0;
	for ( i = 0; i < 100; i++)
	{
		t = i;
		if (t%10==9||t/10==9)
		{
			printf("%d\n", t);
		}
	}
	return 0;
}
//二分查找法
int main()
{
			
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int left = 0;
	int sz = 0;
	sz = sizeof(arr) / sizeof(arr[0]);
	int right = sz - 1;
	while (left<=right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;

		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			printf("找到了下表是:%d\n", mid);
			break;
		}
	}
	if (left>right)
	{
		printf("找不到了");
	}
	return 0;
}
//print from 1 percent to 100 percent of add
int main()
{	
	int i = 0;
	int n = 0;
	float sum = 0.0;
	for (i = 0; i <= 100; i++)
	{
		sum = sum + ((1 /(n+1.0)) * (pow(-1, n)));
			++n;
	}
	printf("%f", sum);
}