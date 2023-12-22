#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 사용자로부터 문장을 입력받아 인자로 입력받은 문자와 비교후 
// 정답여부를 출력하세요
void Printword(char(*word)[10 + 1])
{
    char ans[10];
    for (int i = 0; i < 10; i++)
    {

    }
}

int main_낱말맞추기()
{
    char word[10][10 + 1] = { "tiger", "kid", "money", "internet", "fresh", "lemon", "blue", "tool", "help", "main" };
    int len = strlen(word);
    for (int i = 0; i < len; i++)
    {
        int aa1 = rand() % len;
        int aa2 = rand() % len;
        char tmp = word[10][aa1];
        word[10][aa1] = word[10][aa2];
        word[10][aa2] = tmp;
    }
    Printword(word);
    return 0;
}