#include <stdio.h>

int main() {
	unsigned int x = 0x12345678;
	long lg = 2147483648; //long_max
	double xl = 123456789123.456789;
	printf("Uint: %d\n", x);
	printf("Uint -> short: %d\n", (short)x);
	printf("Uint -> char: %d\n", (char)x);

	printf("\nLong: %d\n", lg);
	printf("Long -> short: %d\n", (int)lg);
	printf("Long -> char: %d\n", (char)lg);
	
	printf("\nDouble: %lf\n", xl);
	printf("Double -> long: %d\n", (long)xl);
	printf("Double -> short: %d\n", (short)xl);
	return 0;
}