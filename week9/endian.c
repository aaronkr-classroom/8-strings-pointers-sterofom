#include <stdio.h>

void check_endian() {
	unsigned int num = 0x12345678; //4바이트
	unsigned char* byte_ptr = (unsigned char*)&num;

	for (int i = 0; i < sizeof(num); i++) {
		printf("%p   0x%02x\n",(byte_ptr+i), byte_ptr[i]);
	}

	if (byte_ptr[0] == 0x12) {
		printf("\nThis is BIG-endian!");
	}
	else if (byte_ptr[0] == 0x78) {
		printf("\nThis is Little-endian!");
	}
	else {
		printf("\nUnknown endian!");
	}
}
int main(void) {
	check_endian();
	return 0;
}