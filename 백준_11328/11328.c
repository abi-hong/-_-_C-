#include <stdio.h>
#include <string.h>

void main()
{
    int N;

    scanf("%d", &N);
    while (N--)
    {
        char word1[1000];
        char word2[1000];
        int same = 1;
        int alphet1[26] = {
            0,
        };
        int alphet2[26] = {
            0,
        };
        scanf("%s %s", word1, word2);
        if (strlen(word1) != strlen(word2))
            printf("Impossible\n");
        else
        {
            for (int i = 0; i < strlen(word1); i++)
            {
                alphet1[word1[i] - 'a']++;
                alphet2[word2[i] - 'a']++;
            }
            for (int i = 0; i < 26; i++)
            {
                if ((alphet1[i]) != alphet2[i])
                {
                    same = 0;
                    break;
                }
            }
            if (same)
                printf("Possible\n");
            else
                printf("Impossible\n");
        }
    }
}