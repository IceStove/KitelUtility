#include "engineering.h"
#include "engineering_one.h"
#include "select.h"
void engineer_run();

void engineeringCal() {
	printf("���п� ���⸦ �����ϼ̽��ϴ�. \n");
	engineer_run();
}

void engineer_run() {
	int input = 0;
	while (1)
	{
		input = select_engineer();
		if (input == BACK) break;
		switch (input)
		{
		case ENGINEER_ONE:
			engineerOne();
			break;
		case ENGINEER_TWO:
			engineerTwo();
			break;
		case ENGINEER_HEX:
			engineerHex();
			break;
		case ENGINEER_OCT:
			engineerOct();
			break;
		default:
			printf("�߸� �Է��ϼ̽��ϴ�.\n");
			break;
		}
		printf("�ƹ� Ű�� �Է��ϼ���.\n");
		getch();
	}
}


void engineerOne() {
	printf("[���п�] ���ڸ� �� ���⸦ �����ϼ̽��ϴ�.\n");
	show_engineer_one();
}
void engineerTwo() {
	printf("[���п�] ���ڸ� �� ���⸦ �����ϼ̽��ϴ�.\n");
	show_engineer_two();
}
void engineerHex() {
	printf("[���п�] 16���� ���⸦ �����ϼ̽��ϴ�.\n");

}
void engineerOct() {
	printf("[���п�] 8���� ���⸦ �����ϼ̽��ϴ�.\n");

}