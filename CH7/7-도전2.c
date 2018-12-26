#include <stdio.h>

int rec_func(int n);
int sum = 0;
int main(void) {
	int res;

	res = rec_func(1);
	printf("%d", res);

	return 0;

}

int rec_func(int n) {
	
	sum += n;
	if (n == 10) return sum;
	rec_func(n + 1);
}