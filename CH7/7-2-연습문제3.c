#include <stdio.h>

void sum(int n);

int main(void) {
	sum(10);
	sum(100);

	return 0;
}

void sum(int n) {
	int i, sum = 0;

	for (i = 1; i <= n; i++) {
		sum += i;
	}

	printf("1부터 %d까지의 합은 %d입니다.\n", n, sum);

}