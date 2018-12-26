#include <stdio.h>

int prime_check(int x);

int main(void) {

	int res, a;

	while (1) {
		printf("숫자 입력:(종료0)");
		scanf("%d", &a);

		if (a == 0) break;

		res = prime_check(a);

		if (res == 0) printf("소수가 아니다.\n");
		else printf("소수가 맞다.\n");

	}

	return 0;

}

int prime_check(int x) {
	int i;

	for (i = 2; i < x; i++) {
		if (x%i == 0)
			return 0;
	}

	return 1;
}