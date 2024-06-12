#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include "calculadora-resta.h"
#include "calculadora-suma.h"
#include "calculadora-multiplicacion.h"
#include "calculadora-division.h"

using namespace std;

// Declaracion de funciones void
void suma();
void resta();
void multiplicacion();
void division();

// Declaración de variables
    int operacion;

int main(){
	cout<<"Numero de operacion\n"<<endl;
    cout<<"1: Suma"<<endl;
    cout<<"2: Resta"<<endl;
    cout<<"3: Multiplicacion"<<endl;
    cout<<"4: Division\n"<<endl;
	cin>>operacion;
	switch(operacion){
		case 1: suma();break;
		case 2: resta();break;
		case 3: multiplicacion();break;
		case 4: division();break;
	
	default:cout<<"Introdujiste un numero erroneo, por favor, vuelve a intentarlo\n"<<endl;
	}
	
	return 0;
	
	
}

