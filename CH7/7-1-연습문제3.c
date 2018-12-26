#include <stdio.h>

double centi_to_meter(int c);

int main(void) {
	double res;
	int a;
	scanf("%d", &a);

	res = centi_to_meter(a);
	printf("%.2lfm\n", res);

	return 0;
}

double centi_to_meter(int c) {
	double temp;

	temp = c / 100.0;

	return temp;

}