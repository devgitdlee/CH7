#include <stdio.h>

void frult(void);

int main(void) {
	frult();

	return 0;
}


void frult(void) {
	printf("apple\n");

	frult();

}