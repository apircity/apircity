#include <stdio.h>

int main()
{
    char c;
    scanf_s("%c", &c, sizeof(c));
    printf("�Է��� ���ĺ�: %c\n", c);
    printf("���ĺ� �ƽ�Ű �ڵ尪:%d\n", c);
    printf("�Է��� ���ĺ�+ 8: %c\n", (c + 8));
    printf("���α׷��� �����մϴ�.");
    return 0;
}