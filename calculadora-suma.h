#ifndef CALCULADORA_SUMA_H
#define CALCULADORA_SUMA_H
#include <stdlib.h>
#include <iostream>

void suma();

using namespace std;

void suma(){
	int num1, num2;
	
	system("cls");
	cout<<"Por favor, introduce el numero 1"<<endl;
	cin>>num1;
	cout<<"Por favor, introduce el numero 2"<<endl;
	cin>>num2;
	cout<<"La respuesta de la suma de "<<num1<<" mas "<<num2<<" es "<<num1+num2<<endl;
}

#endif