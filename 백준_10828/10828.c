#include <stdio.h>
#include <string.h>

int stack[10001];
int num = 0;
int i;

void push(int item)
{
    stack[++num] = item;
}

void pop()
{
    if (num == 0)
        printf("-1\n");
    else
    {
        printf("%d\n", stack[num]);
        stack[num--] = 0;
    }
}

void size()
{
    printf("%d\n", num);
}

void empty()
{
    if (num == 0)
        printf("1\n");
    else
        printf("0\n");
}

void top()
{
    if (num == 0)
        printf("-1\n");
    else
        printf("%d\n", stack[num]);
}

int main()
{
    int N, number;
    char word[10];

    scanf("%d", &N);
    //int stack[N];

    for (i = 0; i < N; i++)
    {
        scanf("%s", word);
        if (strcmp(word, "push") == 0) // 두 문자열 같으면 0
        {
            scanf("%d", &number);
            push(number);
        }
        else if (strcmp(word, "pop") == 0)
        {
            pop();
        }
        else if (strcmp(word, "size") == 0)
        {
            size();
        }
        else if (strcmp(word, "empty") == 0)
        {
            empty();
        }
        else if (strcmp(word, "top") == 0)
        {
            top();
        }
    }
}
