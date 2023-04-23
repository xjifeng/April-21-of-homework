#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
void start()
{
	printf("########################\n");
	printf("########################\n");
	printf("######1.start game######\n");
	printf("######0.exit  game######\n");
	printf("########################\n");
	printf("########################\n");
}
void game()
{
	int guess = 0;//设置猜的数值；
	int ret = 0;
	ret = rand()%100+1;//取余之后是1~99然后加1;
	while (1)
	{
		printf("Pls enter your guess of number:\n");
		scanf_s("%d", &guess);
		if (guess>ret)
		{
			printf("guess big\n ");
		}
		else if(guess<ret)
		{
			printf("guess small\n ");
		}
		else
		{
			printf("guess right~~~\n ");
			break;
		}
	}
}
//猜数字游戏
int main()
{	
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		//print meau;
		start();
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
				game();
				break;
		case 0:
				printf("exit the game\n");
				break;
		default:
			printf("enter was error ,pls enter again\n");
			break;
		}
	} while (input);
	return 0;

}
//在四个数中找出最大值
int main() {
    int arr[4];
    int tmp = 0;
    int i = 0;
    int n = 0;
    int max = 0;
    for (i = 0; i < 4; i++) {
        scanf_s("%d", &arr[i]);     
    }
    int* p =&arr[0];
    for ( n = 0; n < 4; n++)
    {
        if (max<*(p+n))
        {
            max = *(p + n);
        }
    }
    printf("%d", max);
    return 0;
}
//网购
int main() {
    float value = 0;
    float last_value = 0;
    int month = 0;
    int day = 0;
    int discount = 0;
    scanf_s("%f %d %d %d", &value, &month, &day, &discount);
    if (month == 11 && day == 11) {
        last_value = value * 0.7;
        if (discount == 1)
            last_value = last_value - 50;
    }
    else if (month == 12 && day == 12) {
        last_value = value * 0.8;
        if (discount == 1)
            last_value = last_value - 50;
    }
    else if (discount == 1) {
        last_value = value - 50;
    }
    if (last_value<0)
    {
        last_value = 0.00;
    }
    
    printf("%.2f", last_value);
    return 0;
}