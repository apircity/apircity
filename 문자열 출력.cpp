#include<stdio.h>
int main()
{
	char op;
	char str[12];
	scanf_s("%c", &op);
	getchar();
	scanf_s("%s", &str, sizeof(str));
	printf("1. ���� ���:\t%c\n", op);
	printf("2. ���ڿ� �Է�:\t|%-12s|", str);
	return 0;
}