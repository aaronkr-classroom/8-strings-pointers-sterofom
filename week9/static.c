#include <stdio.h>

void test1() {
	int data1 = 0;
	printf("%d, ", data1++);
}
void test2() {
	static int data2 = 0;
	printf("%d, ", data2++);
}
void test3() {
	static int data3 = 0;
	printf("%d, ", ++data3);
}
int main() {
	printf("Test1(): \n");
	for (int i = 0; i < 5; i++)test1();
	printf("\n");
	printf("Test2(): \n");
	for (int i = 0; i < 5; i++)test2();
	printf("\n");
	printf("Test3(): \n");
	for (int i = 0; i < 5; i++)test3();
	printf("\n");
}