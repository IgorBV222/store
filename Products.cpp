#include "Products.h"
#include <iostream>

void print_prod(product& P){
		std::cout << "����������� ������: " << P.name << '\n';
		std::cout << "���������� ������: " << P.number << '\n';
		std::cout << "���� �� �������: " << P.price << '\n';		
}

double full_price(product& P){	
	return P.number * P.price;
}


