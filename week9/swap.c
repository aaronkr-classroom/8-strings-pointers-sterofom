#include <stdio.h>

void swap_val(int a, int b) {
	int tmp = a;
	a = b;
	b = tmp;
	
}
void swap_ptr(int* pa, int* pb) {
	int tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}

int main() {
	int start = 96, end = 5;
	printf("swap value: \n");
	printf("before: start = %d, end = %d\n", start, end);
	if (start > end) swap_val(start, end);
	printf("after: start = %d, end = %d\n", start, end);

	printf("swap pointer: \n");
	printf("before: start = %d, end = %d\n", start, end);
	if (start > end) swap_ptr(&start, &end);
	printf("after: start = %d, end = %d\n", start, end);

	return 0;
}