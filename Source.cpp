#include <iostream>
#include <string>
//#include <cmath>
#include "Products.h"

//using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	
	product apple{ "Apples", 1000, 15 };
	print_prod(apple);
	std::cout << "_____________________________\n";
	std::cout << "������ ��������� ��� ������� ���� ���������� ������� �����: ";
	std::cout << full_price(apple) << "\n\n";
	

	std::cout << "������� ����� �� ������� ��������� ���������� ������: ";
	std::cin >> n;
	std::cout << "\n�������� ������ � �������: " << sell(apple, n) << "\n\n";

	std::cout << "������ ��������� ��� ������� ���� ���������� ������� �����: ";
	std::cout << full_price(apple);
	std::cout << "\n\n";
	
	return 0;
}