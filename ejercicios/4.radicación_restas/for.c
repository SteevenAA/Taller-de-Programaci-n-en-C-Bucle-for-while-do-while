#include <stdio.h> // Inclusión de la biblioteca para entrada y salida de datos

int main() { // Función principal del programa
    // Declarar variables
    double num, approx; // Variables para almacenar el número ingresado y la aproximación de la raíz cúbica
    int i; // Variable de iteración

    // Usuario tiene que ingresar un número para la operación
    printf("Ingrese un número: "); // Solicitar al usuario que ingrese un número
    scanf("%lf", &num); // Leer el número desde la entrada estándar

    // Inicializar la aproximación 
    approx = num / 3.0; // Inicializar la aproximación de la raíz cúbica

    // Realizar iteraciones para mejorar la aproximación de la raíz cúbica
    for (i = 0; i < 100; i++) { // Bucle for para iterar y mejorar la aproximación
        approx = (2.0 * approx + num / (approx * approx)) / 3.0; // Fórmula para mejorar la aproximación de la raíz cúbica
    }

    // Imprimir el resultado
    printf("La raíz cúbica aproximada de %.2f es %.5f\n", num, approx); // Imprimir la raíz cúbica aproximada con formato

    return 0; // Terminar el programa con un código de éxito
}