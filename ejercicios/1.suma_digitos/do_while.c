#include <stdio.h> // Inclusión de la biblioteca para entrada y salida de datos

int main() { // Función principal del programa
    // Declarar variables
    int num, sum = 0, i = 1; // Variables para almacenar el número ingresado, la suma y un contador

    // Usuario tiene que ingresar un número para la operación
    printf("Ingrese un número para calcular la suma de los dígitos: "); // Solicitar al usuario que ingrese un número
    scanf("%d", &num); // Leer el número desde la entrada estándar

    // Sumar todos los números anteriores hasta 'num' utilizando un bucle do-while
    do {
        sum += i; // Sumar 'i' a 'sum'
        i++; // Incrementar el contador 'i'
    } while (i <= num); // Repetir mientras 'i' sea menor o igual que 'num'

    // Imprimir el resultado en consola
    printf("La suma de los números desde 1 hasta %d es: %d\n", num, sum); // Imprimir la suma de los números

    return 0; // Terminar el programa con un código de éxito
}
