//a^n * a^n = a^2n
//귀납적으로 생각해보면,,
//1승을 계산할 수 있다.
//k승을 계산했으면 2k승과 2k+1승도 O(1)에 계산할 수 있다.
//시간 복잡도 --> O(logb)
#include <stdio.h>
long long multi(long long num, long long count, long long n);

int main()
{
    long long A, B, C;

    scanf("%lld %lld %lld", &A, &B, &C);
    printf("%lld\n", multi(A, B, C));
}

long long multi(long long num, long long count, long long n)
{
    if (count == 1)
        return (num % n);
    long long val = multi(num, count / 2, n);
    val = val * val % n;
    if (count % 2 == 0)
        return val;
    return val * num % n;
}