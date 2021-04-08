#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char word1[1000];
    char word2[1000];
    int word1A[26] = {
        0,
    };
    int word2A[26] = {
        0,
    };
    int sum = 0;

    scanf("%s", word1);
    scanf("%s", word2);
    for (int i = 0; i < strlen(word1); i++)
    {
        word1A[word1[i] - 'a']++;
    }
    for (int i = 0; i < strlen(word2); i++)
    {
        word2A[word2[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        int count;
        if (word1A[i] != word2A[i])
        {
            count = abs(word1A[i] - word2A[i]);
            sum += count;
        }
    }
    printf("%d", sum);
}
