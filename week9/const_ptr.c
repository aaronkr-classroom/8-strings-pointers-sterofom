#include <stdio.h>

int main() {
	int x = 10, y = 20;
	int* const p1 = &x;
	*p1 = 15;
	printf("x: %d, y: %d, p1: %d\n", x, y, *p1);
	//p1 = &y; 불가능
	const int* p2 = &x;
	p2 = &y;
	printf("x: %d, y: %d, p2: %d\n", x, y, *p2);
	//*p2 = 25; 불가능

	const int* const p3 = &x;
	printf("x: %d, y: %d, p3: %d\n", x, y, *p3);
	//*p3 = 30 불가능 p3 = &y 불가능
	return 0;
}