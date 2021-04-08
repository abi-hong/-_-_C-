#include <stdio.h>

int main()
{
    int A, B, C;
    int num, n;
    int arr[10] = {
        0,
    };

    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);

    num = A * B * C;
    //1000000을 코드로 나타낼 필요없다
    //첫째자리부터 구하지않고 마지막자리부터 역순으로 구해도 된다.
    //배열에 바로바로 0부터 9까지 나온 개수를 저장하도록 코드를 작성할 수 있다.
    while (num > 0)
    {
        n = num % 10;
        arr[n]++;
        num /= 10;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}