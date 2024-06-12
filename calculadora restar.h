//https://github.com/johhhhhhh/Calculadora-IDS//
#include <iostream>

void resta()
{
    system("cls");
    // Declaración de variables
    int num1, num2, resultado;

    // Solicitar al usuario que ingrese los números
    std::cout << "Ingrese el primer número: ";
    std::cin >> num1;

    std::cout << "Ingrese el segundo número: ";
    std::cin >> num2;

    // Realizar la resta
    resultado = num1 - num2;

    // Mostrar el resultado
    std::cout << "El resultado de la resta es: " << resultado << std::endl;

    system("pause");
    
}
