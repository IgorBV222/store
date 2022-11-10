#include "Products.h"
#include <iostream>

void print_prod(product& P){
		std::cout << "Наменование товара: " << P.name << '\n';
		std::cout << "Количество товара: " << P.number << '\n';
		std::cout << "Цена за единицу: " << P.price << '\n';		
}

double full_price(product& P){	
	return P.number * P.price;
}


