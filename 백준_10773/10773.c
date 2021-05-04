#include <stdio.h>
#define MAX_SIZE 100000

int main()
{
    int k, number;
    int sum = 0;
    int arr[MAX_SIZE] = {
        0,
    };
    int top = -1;

    scanf("%d", &k);
    for (int i = 0; i < k; i++)
    {
        scanf("%d", &number);
        if (number == 0)
        {
            //가장 최근에 있는 수 지움
            arr[top--];
        }
        else
        {
            arr[++top] = number;
        }
    }
    for (int j = 0; j <= top; j++)
    {
        sum += arr[j];
    }
    printf("%d", sum);
}