#include <stdio.h>

int total(int kor, int eng, int mat);
double average(int tot);
void print_title(void);

int main(void){

	int kor, eng, mat, tot;
	double avg;
	printf("#�� ������ ���� �Է�:");
	scanf("%d %d %d", &kor, &eng, &mat);

	tot = total(kor, eng, mat);
	avg = average(tot);

	print_title();
	printf("%3d   %3d   %3d   %3d   %.1lf", kor, eng, mat, tot, avg);
	return 0;

	
}

int total(int kor, int eng, int mat) {
	return kor + eng + mat;
}
double average(int tot) {
	return tot / 3.0;
}
void print_title(void) {
	int i = 0;

	printf("\t\t=====< ����ǥ >=====\n\n");

	for (i = 0; i < 30; i++) {
		printf("-");
	}
	printf("\n");
	printf("����  ����  ����  ����  ���");
	printf("\n");
	for (i = 0; i < 30; i++) {
		printf("-");
	}
	printf("\n");
}