void show_main();
int select_main();
void show_general();
int select_general();
void show_engineer();
int select_engineer();

void show_engineer_one();
void show_engineer_two();

void show_general_one();
void show_general_two();

/* Ű�� ��ƿ��Ƽ ���α׷� ����*/

#define MAIN_GENERAL 1
#define MAIN_ENGINEER 2
#define MAIN_END 0

/* �Ϲ� ���� ���� */

#define GENERAL_ONE 1 // ���ڸ� �� �Ϲݰ���
#define GENERAL_TWO 2 // ���ڸ� �� �Ϲ� ����
#define GENERAL_STRING 3 // ���ڿ� �Ϲ� ����

#define GENERAL_ONE_SPART 1 // ������
#define GENERAL_ONE_X1 2 // �м�

#define GENERAL_TWO_SUB 1 // ����
#define GENERAL_TWO_SUM 2 // ����
#define GENERAL_TWO_DIV 3 // ������
#define GENERAL_TWO_MUL 4 // ����

/* ���п� ���� */

#define ENGINEER_ONE 1 // ���ڸ� �� ���
#define ENGINEER_TWO 2 // ���ڸ� �� ���
#define ENGINEER_HEX 3 // 16����
#define ENGINEER_OCT 4 // 8����

#define ENGINEER_ONE_TAN 1 // tan
#define ENGINEER_ONE_SIN 2 // sin
#define ENGINEER_ONE_COS 3 // cos
#define ENGINEER_ONE_FANS 4 // ���밪
#define ENGINEER_ONE_G1 5 //������
#define ENGINEER_ONE_FACT 6 //n!
#define ENGINEER_ONE_LN 7 //ln
#define ENGINEER_ONE_LOG 8 //log
#define ENGINEER_ONE_PI 9 //PI
#define ENGINEER_ONE_SQUARE2 10 //a^2
#define ENGINEER_ONE_SQUARE3 11 //a^3
#define ENGINEER_ONE_INT 12 // INT
#define ENGINEER_ONE_HEX 13 // Hex
#define ENGINEER_ONE_OCT 14 // Oct
#define ENGINEER_ONE_BINARY 15 //Binary
#define ENGINEER_ONE_DUMP 16 //Dump
#define ENGINEER_ONE_ACSIN 17 //AcSin
#define ENGINEER_ONE_ACCOS 18 //AcCos
#define ENGINEER_ONE_ACTAN 19 //AcTan
#define ENGINEER_ONE_HYPERSIN 20 //Hypersin
#define ENGINEER_ONE_HYPERCOS 21 //HyperCos
#define ENGINEER_ONE_HYPERTAN 22 //HyperTan

#define ENGINEER_TWO_SUB 1 //����
#define ENGINEER_TWO_SUM 2 //����
#define ENGINEER_TWO_DIV 3 //������
#define ENGINEER_TWO_MUL 4 //����
#define ENGINEER_TWO_EXP 5 // Exp
#define ENGINEER_TWO_SQUARE 6 //a^b
#define ENGINEER_TWO_AND 7 // And
#define ENGINEER_TWO_MOD 8 // Mod
#define ENGINEER_TWO_OR 9 // Or
#define ENGINEER_TWO_XOR 10 //Xor
#define ENGINEER_TWO_LSHIFT 11 // <<
#define ENGINEER_TWO_PITA 12 //��Ÿ���

#define SELECT_FALSE -1
#define BACK 0
