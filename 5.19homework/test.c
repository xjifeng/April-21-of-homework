#include <stdio.h>


int main()
{
    int n = 0;
    int m = 0;
    int arr1[100] = { 0 };
    int arr2[100] = { 0 };
    //输入
    scanf("%d %d", &n, &m);
    int i = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for (i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
    }
    //处理
    int j = 0;
    i = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            printf("%d ", arr1[i]);
            i++;
        }
        else
        {
            printf("%d ", arr2[j]);
            j++;
        }
    }
    if (i == n)
    {
        for (; j < m; j++)
        {
            printf("%d ", arr2[j]);
        }
    }
    else
    {
        for (; i < n; i++)
        {
            printf("%d ", arr1[i]);
        }
    }
    return 0;
}
int main2()
{
    int a;
    int arr[100];
    scanf("%d", &a);
    if (a >= 3 && a <= 50)
    {
        int i = 0;
        for (i = 0; i < a; i++)
        {
            scanf("%d", &arr[i]);
        }
        int ret = 0;
        for (i = 0; i < a - 2; i++)
        {
            if ((arr[i] > arr[i + 1] && arr[i + 1] < arr[i + 2]))
            {
                printf("unsorted");
                break;
            }
            else if ((arr[i] < arr[i + 1] && arr[i + 1] > arr[i + 2]))
            {
                printf("unsorted");
                break;
            }
        }
        if (i == a - 2)
        {
            printf("sorted");


        }
        return 0;


    }
}
#include <stdio.h>


int main() {
    //31天：1，3,5,7,8,10,12
   //30天：4,6,9,11
    //2月：
   //平年二月：28
   //闰年二月：29
    int arr1[] = { 1,3,5,7,8,10,12 };
    int arr2[] = { 4,6,9,11 };
    int www = 0;
    int a, b;
    while (scanf("%d %d", &a, &b) != EOF) { // 注意 while 处理多个 case
        int ret = 0;
        if (b != 2)
        {
            int i = 0;
            for (i = 0; i < 4; i++) {
                if (arr2[i] == b) {
                    ret = 1;
                    break;
                }
                else {
                    ret = -1;
                }
            }
            if (ret == 1) {
                printf("30\n");
            }
            else if (ret == -1) {
                printf("31\n");
            }
        }
        else {
            if (((a % 4 == 0) && (a % 100 != 0)) || a % 400 == 0) {
                printf("29\n");
            }
            else {
                printf("28\n");
            }
        }
    }
    return 0;


}