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
	std::cout << "Полная стоимость при покупке всех оставшихся товаров разом: ";
	std::cout << full_price(apple) << "\n\n";
	

	std::cout << "Введите число на которое снижается количество товара: ";
	std::cin >> n;
	std::cout << "\nОсталось товара в наличии: " << sell(apple, n) << "\n\n";

	std::cout << "Полная стоимость при покупке всех оставшихся товаров разом: ";
	std::cout << full_price(apple);
	std::cout << "\n\n";
	
	return 0;
}