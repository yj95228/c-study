#include <stdio.h>
#include <stdlib.h>
#define  N 19

int dr[] = { 0, 1, 1, -1 };
int dc[] = { 1, 1, 0,  1 };
//�ٵ����� ���
void printPan(int p[N][N]);
//������ �̰���� üũ, 1�̸� ����, 0�̸� ���
// 6 �� üũ
int isSuccess(int p[N][N], int r, int c);

int isValid(int p[N][N], int r, int c);

int main_����(void)
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

            if (p[i][j] == 1) printf("��"); //��
            else if (p[i][j] == 2) printf("��");  //��
            else printf("+ ");
        }
        printf("|\n");
    }
    printf("  ----------------------------------------\n");
}
//��踦 ����� �ʾҴ���, �̹� �� ��ǥ������ üũ
int isValid(int p[N][N], int r, int c)
{

    return 0;
}
//������ �̰���� üũ, 1�̸� ����, 0�̸� ���

int isSuccess(int p[N][N], int sr, int sc)
{

    return 0;
}