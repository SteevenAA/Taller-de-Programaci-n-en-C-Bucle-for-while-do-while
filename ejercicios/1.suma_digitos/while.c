#include <stdio.h> // Inclusión de la biblioteca para entrada y salida de datos

int main() { // Función principal del programa
    // Declarar variables
    int num, sum = 0, i = 1; // Variables para almacenar el número ingresado, la suma y el contador

    // Usuario tiene que ingresar un número para la operación
    printf("Ingrese un número para calcular la suma de los dígitos: "); // Solicitar al usuario que ingrese un número
    scanf("%d", &num); // Leer el número desde la entrada estándar

    // Calcular la suma de todos los números desde 1 hasta 'num' utilizando un bucle while
    while (i <= num) { // Mientras el contador 'i' sea menor o igual que el número ingresado
        sum += i; // Sumar 'i' a 'sum'
        i++; // Incrementar el contador 'i'
    }

    // Imprimir el resultado en consola
    printf("La suma de los números desde 1 hasta %d es %d\n", num, sum); // Imprimir la suma de los dígitos

    return 0; // Terminar el programa con un código de éxito
}