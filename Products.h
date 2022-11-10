#pragma once
#include <string>

//�������� ���������
struct product {
	std::string name;  //�������� ������
	int number = 0;    // ���������� ������ (�� ��������� � 0)
	double price;         // ���� �� �������
};

//��������� ������ � ������� ��� ���������� � ��.
void print_prod(product &P);

//��������� ������ � ���������� ������ ��������� ��� ������� ���� ���������� ������� �����
double full_price(product& P);


//��������� ������ � �����, �� ������� ��������� ���������� ������ � ������� �������.
inline int sell(product& P, int num) {
	return P.number -= num;
}



