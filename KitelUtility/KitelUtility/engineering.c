#include "engineering.h"
#include "engineering_two.h"

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
	int c;
	scanf_s("%d", &c);
	double x, y;
	switch (c)
	{
	case 1:
		scanf_s("%lf", &x);
		scanf_s("%lf", &y);
		Sub(x, y);
		break;
	case 2:
		scanf_s("%lf %lf", &x, &y);
		Sum(x, y);
		break;
	case 3:
		scanf_s("%lf %lf", &x, &y);
		Div(x, y);
		break;
	case 4:
		scanf_s("%lf %lf", &x, &y);
		Mul(x, y);
		break;
	case 5:
		scanf_s("%lf %lf", &x, &y);
		Exp(x, y);
		break;
	case 6:
		scanf_s("%lf %lf", &x, &y);
		square(x, y);
		break;
	case 7:
		scanf_s("%lf %lf", &x, &y);
		And(x, y);
		break;
	case 8:
		scanf_s("%lf %lf", &x, &y);
		Mod(x, y);
		break;
	case 9:
		scanf_s("%lf %lf", &x, &y);
		Or(x, y);
		break;
	case 10:
		scanf_s("%lf %lf", &x, &y);
		Xor(x, y);
		break;
	case 11:
		scanf_s("%lf %lf", &x, &y);
		LSHleft(x, y);
		break;
	case 12:
		scanf_s("%lf %lf", &x, &y);
		Pita(x, y);
		break;
		
	default:
		printf("�߸� �Է��ߴ� �ȹٷ� �־�� \n");
		break;
	}


}
void engineerHex() {
	printf("[���п�] 16���� ���⸦ �����ϼ̽��ϴ�.\n");

}
void engineerOct() {
	printf("[���п�] 8���� ���⸦ �����ϼ̽��ϴ�.\n");

}