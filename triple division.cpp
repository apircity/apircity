#include<stdio.h>
int main()
{
	int num1, num2, triple;
	float division;
	scanf_s("%d %d", &num1, &num2);
	triple = num1 * num1 * num1;
	division = (float)num1 / num2;
	printf("¼¼Á¦°ö ¿¬»ê °á°ú:%08d\n", triple);
	printf("³ª´°¼À ¿¬»ê °á°ú:%08.3f", division);
	return 0; 
}