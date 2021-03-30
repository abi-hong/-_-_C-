/*#include <stdio.h>
#include <string.h>
#define MAX 10000
int deq[2 * MAX + 2];
int head = MAX;
int rear = MAX;

void push_front(int x)
{
    deq[--head] = x;
}

void push_back(int x)
{
    deq[rear++] = x;
}

void pop_front()
{
    if (head == rear)
        printf("-1\n");
    else
    {
        printf("%d\n", deq[head]);
        head++;
    }
}

void pop_back()
{
    if (head == rear)
        printf("-1\n");
    else
    {
        printf("%d\n", deq[rear - 1]);
        rear--;
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
    printf("%d\n", deq[head]);
}

void back()
{
    printf("%d\n", deq[rear - 1]);
}

void main()
{
    int N;
    int num;
    int i;
    char word[20];
    scanf("%d\n", &N);

    for (i = 0; i < N; i++)
    {
        scanf("%s", word);
        if (!strcmp(word, "push_front"))
        {
            scanf("%d", &num);
            push_front(num);
        }
        else if (!strcmp(word, "push_back"))
        {
            scanf("%d", &num);
            push_front(num);
        }
        else if (!strcmp(word, "pop_front"))
        {
            pop_front();
        }
        else if (!strcmp(word, "pop_back"))
        {
            pop_back();
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
            if (head == rear)
                printf("-1\n");
            else
            {
                front();
            }
        }
        else if (!strcmp(word, "back"))
        {
            if (head == rear)
                printf("-1\n");
            else
            {
                back();
            }
        }
    }
}*/

#include <stdio.h>
#include <string.h>
#define MAX 5000
int deque[2 * MAX + 1];
int start = MAX, end = MAX, cnt = 0;

void push_front(int n);
void push_back(int n);
int pop_front();
int pop_back();
int size();
int empty();
int front();
int back();

int main()
{
    char command[20];
    int num = 0, n = 0;
    scanf("%d", &num);
    while (num--)
    {
        scanf("%s", &command);
        if (!strcmp(command, "push_front"))
        {
            scanf("%d", &n);
            push_front(n);
        }
        else if (!strcmp(command, "push_back"))
        {
            scanf("%d", &n);
            push_back(n);
        }
        else if (!strcmp(command, "pop_front"))
            printf("%d\n", pop_front());
        else if (!strcmp(command, "pop_back"))
            printf("%d\n", pop_back());
        else if (!strcmp(command, "size"))
            printf("%d\n", size());
        else if (!strcmp(command, "empty"))
            printf("%d\n", empty());
        else if (!strcmp(command, "front"))
            printf("%d\n", front());
        else if (!strcmp(command, "back"))
            printf("%d\n", back());
    }
}

void push_front(int n)
{
    deque[--start] = n;
    cnt++;
}
void push_back(int n)
{
    deque[end++] = n;
    cnt++;
}
int pop_front()
{
    if (cnt == 0)
        return -1;
    cnt--;
    return deque[start++];
}
int pop_back()
{
    if (!cnt)
        return -1;
    cnt--;
    return deque[--end];
}
int size()
{
    return cnt;
}
int empty()
{
    if (!cnt)
        return 1;
    return 0;
}
int front()
{
    if (cnt == 0)
        return -1;
    return deque[start];
}
int back()
{
    if (!cnt)
        return -1;
    return deque[end - 1];
}
