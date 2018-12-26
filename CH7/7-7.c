#include <stdio.h>

void frult(int n);

int main(void) {
	frult(1);

	return 0;
}


void frult(int n) {
	printf("apple\n");
	if (n == 3) return;
	frult(n + 1);
	printf("jam\n");

}