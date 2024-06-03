#include <stdio.h> // Inclusión de la biblioteca para entrada y salida de datos

int main() { // Función principal del programa
    int n; // Variable para almacenar el número de términos
    unsigned long long product = 1; // Variable para almacenar el producto de los términos
    int term = 2; // Primer término de la serie geométrica
    int i = 0; // Inicializar el contador

    // Ingrese el número de términos
    printf("Ingrese el número de términos para calcular el producto: ");
    scanf("%d", &n); // Leer el número de términos desde la entrada estándar

    // Asegurarse de que el número de términos sea positivo
    if (n <= 0) {
        printf("Por favor, ingrese un número positivo.\n"); // Mensaje de error
        return 1; // Salir del programa con un código de error
    }

    // Calcular el producto de los primeros n términos usando un bucle while
    while (i < n) {
        product *= term; // Multiplicar el producto actual por el término actual
        term *= 2; // Calcular el siguiente término multiplicando el término actual por 2
        i++; // Incrementar el contador
    }

    // Imprimir el resultado
    printf("El producto de los primeros %d términos es %llu\n", n, product); // Imprimir el producto
    printf("Muchas gracias mundo :D\n"); // Imprimir un mensaje de agradecimiento

    return 0; // Terminar el programa con un código de éxito
}