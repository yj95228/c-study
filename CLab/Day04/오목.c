#include <stdio.h>
#include <stdlib.h>
#define  N 19

int dr[] = { 0, 1, 1, -1 };
int dc[] = { 1, 1, 0,  1 };
//바둑판을 출력
void printPan(int p[N][N]);
//오목이 이겼는지 체크, 1이면 성공, 0이면 계속
// 6 목 체크
int isSuccess(int p[N][N], int r, int c);

int isValid(int p[N][N], int r, int c);

int main_오목(void)
{

    return EXIT_SUCCESS;
}

void printPan(int p[N][N])
{
    int i, j;
    printf("\n   0 1 2 3 4 5 6 7 8 9101112131415161718\n");
    printf("  ----------------------------------------\n");
    for (i = 0; i < N; i++)
    {
        printf("%2d|", i);
        for (j = 0; j < N; j++)
        {

            if (p[i][j] == 1) printf("●"); //흑
            else if (p[i][j] == 2) printf("○");  //백
            else printf("+ ");
        }
        printf("|\n");
    }
    printf("  ----------------------------------------\n");
}
//경계를 벗어나지 않았는지, 이미 둔 좌표인지를 체크
int isValid(int p[N][N], int r, int c)
{

    return 0;
}
//오목이 이겼는지 체크, 1이면 성공, 0이면 계속

int isSuccess(int p[N][N], int sr, int sc)
{

    return 0;
}