#ifndef CALCULADORA_DIVISION_H
#define CALCULADORA_DIVISION_H
#include <iostream>
#include <stdlib.h>

void division();

using namespace std;

void division(){
	int num1, num2;
	
	system("cls");
	cout<<"Por favor, introduce el numero 1"<<endl;
	cin>>num1;
	cout<<"Por favor, introduce el numero 2"<<endl;
	cin>>num2;
	cout<<"La respuesta de la division de "<<num1<<" entre "<<num2<<" es "<<num1/num2<<endl;
}

#endif