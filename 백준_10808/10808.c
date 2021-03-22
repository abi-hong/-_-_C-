//알파벳 개수인 26개를 모두 돌면서 확인하는 방법 말고
//일단 각 알파벳의 등장횟수를 담는 그릇을 다 만들어둔다.
//이후에 주어진 문자열을 한 글자씩 보면서 그릇에 알페벳을 담는다.
//예를 들어, a면 a를 나타내는 그릇에 1을 추가하는 식으로 말이다.
//이렇게 모든 글자를 순회하면 문자열을 한 번만 훑어도 될 것이다.
//그리고 c언어에서 문자열이 나왔다면 '아스키코드' 꼭!! 생각해볼것!
#include <stdio.h>

int main()
{
    char arr[101];
    int wordCount[26] = {
        0,
    };

    scanf("%s", arr);

    for (int i = 0; i < strlen(arr); i++)
    {
        wordCount[arr[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        printf("%d ", wordCount[i]);
    }
    return 0;
}
