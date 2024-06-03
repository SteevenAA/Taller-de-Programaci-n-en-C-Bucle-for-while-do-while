#include <stdio.h> // Inclusión de la biblioteca para entrada y salida de datos

int main() { // Función principal del programa
    int numero; // Variable para almacenar el número ingresado por el usuario
    int esPrimo = 1; // Suponemos que el número es primo al principio
    int divisor = 2; // Comenzamos verificando divisibilidad desde 2

    // Solicitar al usuario que ingrese un número
    printf("Ingrese un número: ");
    scanf("%d", &numero); // Leer el número desde la entrada estándar

    // Verificar si el número es menor o igual a 1
    if (numero <= 1) {
        printf("%d no es primo.\n", numero); // Imprimir que el número no es primo
        return 0; // Finalizar el programa con un código de éxito
    }

    // Verificar si el número es primo utilizando un bucle do-while
    do {
        if (numero % divisor == 0) { // Verificar si el número es divisible por el divisor actual
            esPrimo = 0; // Si encuentra un divisor, el número no es primo
            break; // Salir del bucle ya que hemos determinado que el número no es primo
        }
        divisor++; // Incrementar el divisor para probar con el siguiente número
    } while (divisor <= numero / 2); // Iterar hasta la mitad del número, ya que ningún divisor será mayor que la mitad de él mismo

    // Imprimir el resultado
    if (esPrimo) { // Verificar si esPrimo es verdadero
        printf("%d es primo.\n", numero); // Imprimir que el número es primo
    } else {
        printf("%d no es primo.\n", numero); // Imprimir que el número no es primo
    }

    return 0; // Terminar el programa con un código de éxito
}