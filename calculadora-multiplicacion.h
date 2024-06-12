#ifndef CALCULADORA_MULTIPLICACION_H
#define CALCULADORA_MULTIPLICACION_H
#include <iostream>
#include <stdlib.h>

void multiplicacion();

using namespace std;

void multiplicacion(){
	int num1, num2;
	
	system("cls");
	cout<<"Por favor, introduce el numero 1"<<endl;
	cin>>num1;
	cout<<"Por favor, introduce el numero 2"<<endl;
	cin>>num2;
	cout<<"La respuesta de la multiplicacion de "<<num1<<" por "<<num2<<" es "<<num1*num2<<endl;
}

#endif