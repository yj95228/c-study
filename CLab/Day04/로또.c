

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int header();
void inputf(int* sp, int len);
int uniqueValue(int* sp, int index);
void outputf(int* sp, int len);

int main_�ζ�(void)
{
    int su[7];
    int len = sizeof(su) / sizeof(su[0]);

    int n, i, seed;


    return EXIT_SUCCESS;
}
int header()
{
    printf("\n\n<<�ζ� ���α׷�>>\n");
    printf("1. �ڵ� ���� (1 Set)\n");
    printf("2. �ڵ� ���� (N Set)\n");
    printf("3. Seed �Է� \n");
    printf("4. ���� \n");
    printf("��ȣ�� �����ϼ���.");
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
        *(sp + i) = uniqueValue(sp, i);  //�ߺ����� �������� ���� ���� �Լ�
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
