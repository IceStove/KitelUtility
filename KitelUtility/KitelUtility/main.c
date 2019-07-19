#include <stdio.h>
#include <stdlib.h>
#include "general.h"

void show(); // ���α׷� �Ұ�
void run(); // ����
int selectMenu(); //��ü �޴�

void main() {
	run();
}

void show() {
	printf("============Ű�� ��ƿ��Ƽ ���α׷�============\n");
	printf("[1] �Ϲ� ����\n");
	printf("[2] ���п� ����\n");
	printf("[0] ����\n");
	printf("==============================================\n");
}

void run() {
	int input = 0;
	while (1)
	{
		input = selectMenu();
		if (input == 0) break;
		switch (input)
		{
		case 1:
			generalCal();
			break;
		case 2:
			engineeringCal();
			break;
		default:
			printf("�߸� �Է��ϼ̽��ϴ�.\n");
			break;
		}
		printf("�ƹ� Ű�� �Է��ϼ���.\n");
		getch();
	}
}

int selectMenu() {
	int input = 0;
	show();
	scanf_s("%d", &input);
	while (input != 0) {
		if (input == 1) {
			return 1;
		}
		else if (input == 2) {
			return 2;
		}
		else {
			return -1;
		}
	}
	return 0;
}