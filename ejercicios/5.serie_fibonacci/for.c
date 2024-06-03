#include <stdio.h> // Inclusión de la biblioteca para entrada y salida de datos

int main() { // Función principal del programa
    // Declarar variables
    int n, first = 0, second = 1, next; // Variables para la serie de Fibonacci y el control de bucle

    // Ingrese el número de elementos de la serie de Fibonacci
    printf("Ingrese el número de elementos de la serie de Fibonacci: ");
    scanf("%d", &n); // Leer el número desde la entrada estándar

    // Asegurar que el número de elementos sea positivo
    if (n <= 0) { // Verificar si el número es menor o igual a cero
        printf("Por favor, ingrese un número positivo.\n"); // Mensaje de error si n es no positivo
        return 1; // Salir del programa con un código de error
    }

    printf("Serie de Fibonacci: "); // Imprimir el encabezado de la serie de Fibonacci

    // Imprimir los primeros n elementos de la serie de Fibonacci usando un bucle for
    for (int i = 0; i < n; i++) { // Iterar desde 0 hasta n-1
        if (i == 0) { // Verificar si es el primer elemento
            printf("%d", first); // Imprimir el primer elemento
        } else if (i == 1) { // Verificar si es el segundo elemento
            printf(", %d", second); // Imprimir el segundo elemento
        } else { // Si es un elemento posterior al segundo
            next = first + second; // Calcular el siguiente número de Fibonacci
            first = second; // Actualizar el primer número para el siguiente cálculo
            second = next; // Actualizar el segundo número para el siguiente cálculo
            printf(", %d", next); // Imprimir el siguiente número de Fibonacci
        }
    }

    return 0; // Terminar el programa con un código de éxito
}