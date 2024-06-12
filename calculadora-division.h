#include <iostream>
#include <stdlib.h>
using namespace std;
void division();

void division()
{
    system("cls");
    // Declaración de variables
    int num1, num2, resultado;

    // Solicitar al usuario que ingrese los números
    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    // Realizar la division
    resultado = num1 / num2;

    // Mostrar el resultado
    cout << "El resultado de la division es: " << resultado << std::endl;

    system("pause");
    system("cls");

}

