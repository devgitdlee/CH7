#include <stdio.h>
#include <math.h>

int my_power(int x, int y);

int main(void) {

	int res;
	int base, exp;
	while (1) {

		printf("�ؼ��� ������ �Է��Ͻÿ�(����� 0)");
		scanf("%d %d", &base, &exp);

		//res = my_power(base, exp);
		res = pow(base, exp);
		printf("%d\n", res);

		if (res == 0) break;
	}
	return 0;
}

int my_power(int x, int y) {
	int i, temp = 1;

	for (i = 0; i < y; i++) {
		temp *= x;
	}

	return temp;
}
