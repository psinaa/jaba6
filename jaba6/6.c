#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

void main()
{
	setlocale(LC_ALL, "RUS");
	int yeas,x,y,j;
	double l;
//1

	puts("������� ���");
	scanf("%d", &yeas);

	if (yeas % 4 == 0)
		printf("��� %d ����������\n", yeas);
	else
		printf("��� %d �� ����������\n", yeas);
	
	if (yeas % 4 == 0 && yeas % 100 != 0)
		printf("��� %d ����������\n", yeas);
	else if (yeas % 400 == 0)
		printf("��� %d ����������\n", yeas);
	else
		printf("��� %d �� ����������\n", yeas);

	
//2

	puts("������� �����");
	scanf("%d", &x);
	l = 1./(x + 6);
/*
	if (x >= 1)
		printf("%d\n",0);
	else
		printf("%.1f\n",l);
*/
	printf("%.1f\n", (x >= 1 ? 0 : l));


//3
	puts("������� ��� ��������");
	scanf("%d", &j);
	y = 2022 - j;
	if (y % 10 >= 5 || (y>5 && y<=20))
		printf("%d ���", y);
	else if (y < 5|| (y % 10 <= 5&&y%10!=1))
		printf("%d ����", y);
	else
		printf("%d ���", y);
 }