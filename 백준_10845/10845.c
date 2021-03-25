//큐
#include <stdio.h>
#include <string.h>
#define MAX 10000
int queue[MAX];
int head = 0;
int rear = 0;

void push(int x)
{
    queue[rear++] = x;
}
void pop()
{
    if (head == rear)
        printf("-1\n");
    else
    {
        printf("%d\n", queue[head]);
        head++;
    }
}
void size()
{
    printf("%d\n", (rear - head));
}
void empty()
{
    if (head == rear)
        printf("1\n");
    else
        printf("0\n");
}
void front()
{
    if (head == rear)
        printf("-1\n");
    else
    {
        printf("%d\n", queue[head]);
    }
}
void back()
{
    if (head == rear)
        printf("-1\n");
    else
        printf("%d\n", queue[rear - 1]);
}
int main()
{
    int i, N, num;
    char word[10];
    scanf("%d\n", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%s", word);
        if (!strcmp(word, "push"))
        {
            scanf("%d", &num);
            push(num);
        }
        else if (!strcmp(word, "pop"))
        {
            pop();
        }
        else if (!strcmp(word, "size"))
        {
            size();
        }
        else if (!strcmp(word, "empty"))
        {
            empty();
        }
        else if (!strcmp(word, "front"))
        {
            front();
        }
        else if (!strcmp(word, "back"))
        {
            back();
        }
    }
    return 0;
}