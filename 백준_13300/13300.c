#include <stdio.h>

int main()
{
    int allnum, most, grade, room;
    int sum = 0;
    int sex[1000];
    int student[1000];
    int w[7] = {
        0,
    };
    int m[7] = {
        0,
    };

    scanf("%d %d", &allnum, &most);
    for (int i = 0; i < allnum; i++)
    {
        scanf("%d %d", &sex[i], &student[i]);
        grade = student[i];
        if (sex[i] == 1)
            w[grade]++;
        else if (sex[i] == 0)
            m[grade]++;
    }
    for (int j = 1; j < 7; j++)
    {
        if (w[j] != 0)
        {
            room = w[j] / most;
            sum += room;
            if (w[j] % most)
                sum++;
        }
        if (m[j] != 0)
        {
            room = m[j] / most;
            sum += room;
            if (m[j] % most)
                sum++;
        }
    }
    printf("%d", sum);
}