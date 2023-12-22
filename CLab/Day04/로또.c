

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int header();
void inputf(int* sp, int len);
int uniqueValue(int* sp, int index);
void outputf(int* sp, int len);

int main_로또(void)
{
    int su[7];
    int len = sizeof(su) / sizeof(su[0]);

    int n, i, seed;


    return EXIT_SUCCESS;
}
int header()
{
    printf("\n\n<<로또 프로그램>>\n");
    printf("1. 자동 생성 (1 Set)\n");
    printf("2. 자동 생성 (N Set)\n");
    printf("3. Seed 입력 \n");
    printf("4. 종료 \n");
    printf("번호를 선택하세요.");
    fflush(stdout);
    int num;
    scanf("%d", &num);
    return num;
}
void inputf(int* sp, int len)
{
    int i;
    for (i = 0; i < len; i++)
    {
        *(sp + i) = uniqueValue(sp, i);  //중복되지 않은값을 구해 오는 함수
    }
}
void outputf(int* sp, int len)
{
    int i;
    for (i = 0; i < len; i++)
    {
        printf("%d  ", *sp);
        ++sp;
    }
    printf("\n");
}
int uniqueValue(int* sp, int index)
{
    return 0;
}
