#include<stdio.h>
int main()
{
    int k, e, m;
    float sum;
    scanf_s("%d %d %d", &k, &e, &m);
    sum = k + e + m;
    printf("1. ���� ����: %d\n", k);
    printf("2. ���� ����: %d\n", e);
    printf("3. ���� ����:%d\n", m);
    printf("����: %f\n", sum);
    printf("���: %0.2f", sum / 3.0);
    return 0;
}