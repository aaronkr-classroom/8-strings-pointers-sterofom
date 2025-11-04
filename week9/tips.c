#include <stdio.h>

void test1(short data) {
	short soft = 0;
	soft = data;
	printf("soft = %d\n", soft);

}

void test2(short* ptr) {
	short soft = 0;
	soft = *ptr;
	printf("soft = %d\n", soft);
	*ptr = 3;
}

int main() {
	short tips = 5;
	printf("tips = %d\n", tips);

	test1(tips);
	printf("test1 후, tips = %d\n", tips);
	test2(&tips);
	printf("test2 후, tips = %d\n", tips);
	return 0;
}