#include<stdio.h>
int main()
{
	int num1, num2, triple;
	float division;
	scanf_s("%d %d", &num1, &num2);
	triple = num1 * num1 * num1;
	division = (float)num1 / num2;
	printf("������ ���� ���:%08d\n", triple);
	printf("������ ���� ���:%08.3f", division);
	return 0; 
}