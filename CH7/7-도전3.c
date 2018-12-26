#include <stdio.h>

int prime_check(int x);

int main(void) {

	int res, a, cnt = 0;

	while (1) {
		printf("양수 입력:(종료0)");
		scanf("%d", &a);

		if (a == 0) break;
		for (int i = 2; i <= a; i++) {
			res = prime_check(i);
			if (res == 1) {
				printf("%d\t", i);
				cnt++;
				if (cnt == 5) {
					cnt = 0;
					printf("\n");
				}
			}
		}
	}

	return 0;

}

int prime_check(int x) {
	int i;

	for (i = 2; i < x; i++) {
		if (x%i == 0) break;
	}
	if (i == x) return 1;
	else return 0;
}