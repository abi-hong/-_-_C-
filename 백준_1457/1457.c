#include <stdio.h>

int main()
{
    int num, roomnumber, same, sixnine;
    int count = 0;
    int number[10] = {
        0,
    };
    scanf("%d", &num);

    roomnumber = num;
    while ((roomnumber / 10) != 0)
    {
        number[roomnumber % 10]++;
        roomnumber = roomnumber / 10;
    }
    number[roomnumber]++;

    same = number[6] + number[9];
    sixnine = same % 2;
    same = same / 2;
    same = same + sixnine;
    number[6] = 0;
    number[9] = 0;
    
    int max = 0;
    for (int i = 0; i < 10; i++)
    {
        if (number[i] > max)
        {
            max = number[i];
        }
    }
    if (max >= same)
    {
        count = max;
    }
    else
    {
        count = same;
    }
    printf("%d", count);
}