#include <stdio.h>

int disp_menu(void);

int main(void) {
	int sel;

	sel = disp_menu();
	printf("���õ� �޴��� %d�� �Դϴ�.\n", sel);

	return 0;
}

int disp_menu(void) {

	printf("1. ����«��\n");
	printf("2. �ᳪ������\n");
	printf("3. ������Į����\n");

	int i;
	printf("# �޴��� �����ϼ���:");
	scanf("%d", &i);

	return i;

}