#include <stdio.h> // Inclusión de la biblioteca para entrada y salida de datos

int main() { // Función principal del programa
    // Declarar variables
    int num, guess = 0, cubed; // Variables para almacenar el número ingresado, la suposición inicial y el cubo de la suposición

    // Usuario tiene que ingresar un número para la operación
    printf("Ingrese un número: "); // Solicitar al usuario que ingrese un número
    scanf("%d", &num); // Leer el número desde la entrada estándar

    // Se procede a calcular la raíz cúbica utilizando restas sucesivas con un bucle while
    while (1) { // Bucle while infinito para calcular la raíz cúbica
        cubed = guess * guess * guess; // Calcular el cubo de la suposición actual
        if (cubed == num) { // Si el cubo de la suposición es igual al número dado
            break; // Salir del bucle
        } else if (cubed > num) { // Si el cubo de la suposición es mayor que el número dado
            guess--; // Reducir la suposición
            break; // Salir del bucle
        }
        guess++; // Incrementar la suposición
    }

    // Imprimir el resultado
    printf("La raíz cúbica aproximada de %d es %d\n", num, guess); // Imprimir la raíz cúbica aproximada

    return 0; // Terminar el programa con un código de éxito
}