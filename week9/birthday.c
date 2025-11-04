#include <stdio.h>

int main()
{
	short birthday;
	short* ptr;
	ptr = &birthday;

	int intVar = 42;
	float floatVar = 3.1415972;
	char charVar = 'A';
	double doubleVar = 9.81;

	int* intPtr = &intVar;
	float* floatPtr = &floatVar;
	char* charPtr = &charVar;
	double* doublePtr = &doubleVar;

	printf("birthday 변수의 주소는 %p입니다.\n", ptr);
	printf("intVar 변수 값: %d,\t주소: %p\n", *intPtr, intPtr);
	printf("floatVar 변수 값: %f,\t주소: %p\n", *floatPtr, floatPtr);
	printf("charVar 변수 값: %c,\t주소: %p\n", *charPtr, charPtr);
	printf("doubleVar 변수 값: %.2lf,\t주소: %p\n", *doublePtr, doublePtr);

	return 0;
}