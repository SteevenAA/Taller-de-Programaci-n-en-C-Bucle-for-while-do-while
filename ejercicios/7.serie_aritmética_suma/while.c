#include <stdio.h> // Inclusión de la biblioteca para entrada y salida de datos

int main() { // Función principal del programa
    int n; // Variable para almacenar el número de términos
    int sum = 0; // Variable para almacenar la suma de los términos
    int i = 1; // Inicialización del contador para el bucle

    // Ingrese el número de términos
    printf("Ingrese el número de términos para sumar: ");
    scanf("%d", &n); // Leer el número de términos desde la entrada estándar

    // Asegurarse de que el número de términos sea positivo
    if (n <= 0) {
        printf("Por favor, ingrese un número positivo.\n"); // Mensaje de error si n no es positivo
        return 1; // Salir del programa con un código de error
    }

    // Calcular la suma de los primeros n términos usando un bucle while
    while (i <= n) { // Iterar mientras el contador sea menor o igual a n
        sum += i; // Sumar el valor actual del contador a la suma total
        i++; // Incrementar el contador para avanzar al siguiente término
    }

    // Imprimir el resultado
    printf("La suma de los primeros %d términos es %d\n", n, sum); // Imprimir la suma

    return 0; // Terminar el programa con un código de éxito
}