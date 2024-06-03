#include <stdio.h> // Inclusión de la biblioteca para entrada y salida de datos

int main() { // Función principal del programa
    // Declarar variables
    int num, guess = 0, cubed; // Variables para almacenar el número ingresado, la estimación de la raíz cúbica y el cubo estimado

    // Usuario tiene que ingresar un número para la operación
    printf("Ingrese un número: "); // Solicitar al usuario que ingrese un número
    scanf("%d", &num); // Leer el número desde la entrada estándar

    // Se procede a calcular la raíz cúbica utilizando restas sucesivas con un bucle do-while
    do { // Iniciar bucle do-while para calcular la raíz cúbica
        cubed = guess * guess * guess; // Calcular el cubo de la estimación actual
        if (cubed == num) { // Verificar si el cubo es igual al número
            break; // Salir del bucle si se encuentra la raíz cúbica exacta
        } else if (cubed > num) { // Verificar si el cubo es mayor que el número
            guess--; // Decrementar la estimación de la raíz cúbica
            break; // Salir del bucle
        }
        guess++; // Incrementar la estimación de la raíz cúbica
    } while (1); // Repetir infinitamente (se rompe con las declaraciones de break)

    // Imprimir el resultado
    printf("La raíz cúbica aproximada de %d es %d\n", num, guess); // Imprimir la raíz cúbica aproximada

    return 0; // Terminar el programa con un código de éxito
}