#include <stdio.h> // Inclusión de la biblioteca para entrada y salida de datos

int main() { // Función principal del programa
    // Declarar variables
    int num, sum = 0; // Variables para almacenar el número ingresado y la suma

    // Usuario tiene que ingresar un número para la operación
    printf("Ingrese un número para calcular la suma de los dígitos: "); // Solicitar al usuario que ingrese un número
    scanf("%d", &num); // Leer el número desde la entrada estándar

    // Sumar todos los números desde 1 hasta 'num' utilizando un bucle for
    for (int i = 1; i <= num; i++) {
        sum += i; // Sumar 'i' a 'sum' en cada iteración
    }

    // Imprimir el resultado en consola
    printf("La suma de los dígitos desde 1 hasta %d es %d\n", num, sum); // Imprimir la suma de los dígitos

    return 0; // Terminar el programa con un código de éxito
}