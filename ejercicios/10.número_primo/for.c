#include <stdio.h> // Inclusión de la biblioteca para entrada y salida de datos

int main() { // Función principal del programa
    int numero; // Variable para almacenar el número ingresado por el usuario
    int esPrimo = 1; // Suponemos que el número es primo al principio

    // Ingrese un número
    printf("Ingrese un número: ");
    scanf("%d", &numero); // Leer el número desde la entrada estándar

    // Asegurar si el número es menor o igual a 1
    if (numero <= 1) {
        printf("%d no es primo.\n", numero); // Imprimir que el número no es primo
        return 0; // Finalizar el programa con un código de éxito
    }

    // Verificar si el número es primo utilizando un bucle for
    for (int i = 2; i <= numero / 2; i++) { // Iterar desde 2 hasta la mitad del número
        if (numero % i == 0) { // Verificar si el número es divisible por el divisor actual
            esPrimo = 0; // Si encuentra un divisor, el número no es primo
            break; // Salir del bucle ya que hemos determinado que el número no es primo
        }
    }

    // Imprimir el resultado
    if (esPrimo) { // Verificar si esPrimo es verdadero
        printf("%d es primo.\n", numero); // Imprimir que el número es primo
    } else {
        printf("%d no es primo.\n", numero); // Imprimir que el número no es primo
    }

    return 0; // Terminar el programa con un código de éxito
}