#include <stdio.h>

void suma()
{
        int num1, num2, suma;
    system("cls");
    printf("Ingrese el primer número: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);

    suma = num1 + num2;

    printf("La suma de %d y %d es: %d\n", num1, num2, suma);

}

