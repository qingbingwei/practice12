#include <stdio.h>

int main()
{
    //第一题
    /*int n = 0;
    scanf("%d",&n);
    int sum = 0;

    if(n >= 0 && n <=10)
    {
        sum = n * 10;
    }
    else if(n >= 11 && n <= 20)
    {
        sum = 60 + (n - 10) * 2;
    }
    else if(n >= 21 && n <= 40)
    {
        sum = 80 + (n - 20)*1;
    }
    else
    {
        printf("wrong/n");
    }
    printf("%d\n",sum);*/

    //第二题
    /*int n = 0;
    scanf("%d",&n);
    float time1 = 0; //骑车
    float time2 = 0; //走路

    time1 = 50 + n / 3.0;
    time2 = n / 1.2;

    if(time1 < time2)
        printf("ride quicker\n");
    else if(time1 > time2)
        printf("walk quicker\n");
    else
        printf("equal\n");*/

    //第三题
    int n = 0;
    scanf("%d",&n);
    int arr[n];
    float sum = 0;
    for (int i = 0; i < n; ++i)
    {
        scanf("%d",&arr[i]);
        sum = arr[i] + sum;
    }
    float average = 0;
    average = sum/n;
    printf("%.2f\n",average);

    return 0;

}
