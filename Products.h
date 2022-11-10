#pragma once
#include <string>

//Описание структуры
struct product {
	std::string name;  //название товара
	int number = 0;    // количество товара (по умолчанию – 0)
	double price;         // цена за единицу
};

//Принимает объект и выводит всю информацию о нём.
void print_prod(product &P);

//Принимает объект и возвращает полную стоимость при покупке всех оставшихся товаров разом
double full_price(product& P);


//Принимает объект и число, на которое снижается количество товара у данного объекта.
inline int sell(product& P, int num) {
	return P.number -= num;
}



