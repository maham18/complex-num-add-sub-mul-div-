#include<iostream>
#include"complex.h"

using namespace std;

int main()
{
	ComplexNumber Z1(2, 5);
	ComplexNumber Z2(3,5);
	ComplexNumber Z3(0, 0);
	ComplexNumber  Z4(Z3);
	ComplexNumber Z5;
	ComplexNumber Z6;

	Z1.display();
	Z2.display();
	Z3.display();

	Z3= Z1 + Z2;
	Z4 = Z1 - Z2;
	Z5 = Z1*Z2;
	Z6 = Z1 / Z2;
	cout << "addition =";
	cout <<  Z3 ;
	cout << "subtraction =";
	cout << Z4;
	cout << "multiplication =";
	cout << Z5;
	cout << "division =";
	cout << Z6;
	getchar();
}