#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include "calculadora restar.h"
#include "calculadora-suma.h"
#include "calculadora-multiplicacion.h"
#include "calculadora-division.h"
using namespace std;

// Declaración de variables
    int operacion;

int main()
    {
    // Solicitar al usuario que ingrese la operacion que quiere realizar
    cout << "Ingrese el numero de la operacion que quiere realizar:"<<endl;
    cout << "1: Suma"<<endl;
    cout << "2: Resta"<<endl;
    cout << "3: Multiplicacion"<<endl;
    cout << "4 Division\n"<<endl;
    cin >> operacion;
    switch(operacion){
						case 1:void suma();break;
						case 2:void resta();break;
						case 3:void multiplicacion();break;
						case 4:void division();break;
					default:
						cout<<"Introdujo un valor incorrecto, vuelve a intentarlo"<<endl;
						return 0;
						break;
						
					}
        
    
    }


