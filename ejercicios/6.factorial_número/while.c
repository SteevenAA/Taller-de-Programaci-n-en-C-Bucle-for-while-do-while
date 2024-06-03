#include <stdio.h> // Inclusión de la biblioteca para entrada y salida de datos

int main() { // Función principal del programa
    // Declarar variables
    int n; // Número para calcular su factorial
    unsigned long long factorial = 1; // Variable para almacenar el resultado del factorial

    // Ingrese un número entero
    printf("Ingrese un número para calcular su factorial: ");
    scanf("%d", &n); // Leer el número desde la entrada estándar

    // Asegurar que el número sea no negativo
    if (n < 0) { // Verificar si el número es negativo
        printf("El factorial no está definido para números negativos.\n"); // Mensaje de error si n es negativo
        return 1; // Salir del programa con un código de error
    }

    int i = 1; // Inicializar el contador

    // Calcular el factorial usando un bucle while
    while (i <= n) { // Repetir hasta que el contador alcance n
        factorial *= i; // Multiplicar el factorial actual por el valor del contador
        i++; // Incrementar el contador
    }

    // Imprimir el resultado
    printf("%d! = %llu\n", n, factorial); // Imprimir el factorial calculado

    return 0; // Terminar el programa con un código de éxito
}