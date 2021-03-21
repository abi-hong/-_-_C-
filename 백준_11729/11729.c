//하노이 탑
//만약 n개의 원판을 기둥 1에서 기둥 3으로 옮긴다고 가정하자
//먼저 n-1개의 원판들을 기둥 2로 옮긴다.
//두번째로 n번째 원판을 기둥 3으로 옮겨야 한다.
//마지막으로 기둥 2에 있던 n-1개의 원판을 기둥 3으로 옮겨주면 된다.
//따라서 함수를 작성할 때, 시작과 도착 기둥을 인자로 받는 함수를 작성해야 한다.
#include <stdio.h>
void hanoi(int a, int b, int n);

int main()
{
    int N;

    scanf("%d", &N);
    printf("%d\n", (1 << N) - 1);
    hanoi(1, 3, N);
}

void hanoi(int a, int b, int n)
{
    if (n == 1)
        printf("%d %d\n", a, b);
    else
    {
        hanoi(a, 6 - a - b, n - 1);
        printf("%d %d\n", a, b);
        hanoi(6 - a - b, b, n - 1);
    }
}
