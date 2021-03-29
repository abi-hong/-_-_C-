#include <stdio.h>
int main(void)
{
    int n, v, a = 0;
    int arr[101] = {
        0,
    };
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &v);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == v)
            a++;
    }
    printf("%d", a);

    return 0;
}
/*#include <stdio.h>

int main()
{
    int Number[201];
    int n, m;
    int count = 0;
    int findN;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &m);
        Number[m+100]++;
    }

    scanf("%d", &findN);
    printf("%d", Number[findN + 100]);
    return 0;
}*/