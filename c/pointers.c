#include <stdio.h>

int main() {
	int a = 0x7f;
	int *pa = &a;
	printf("Value of \"a\": %d \n", a);
	printf("Memory address of \"a\": %p \n", &a);
	printf("Value of pointer \"pa\" (Memory address of \"a\"): %p \n", pa);
	printf("Memory address of pointer \"pa\": %p \n", &pa);
	return 0;
}
