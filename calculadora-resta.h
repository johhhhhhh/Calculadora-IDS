#ifndef CALCULADORA_RESTA_H
#define CALCULADORA_RESTA_H
#include <iostream>
#include <stdlib.h>

void resta();

using namespace std;

void resta(){
	int num1, num2;
	
	system("cls");
	cout<<"Por favor, introduce el numero 1"<<endl;
	cin>>num1;
	cout<<"Por favor, introduce el numero 2"<<endl;
	cin>>num2;
	cout<<"La respuesta de la resta de "<<num1<<" menos "<<num2<<" es "<<num1-num2<<endl;
}

#endif