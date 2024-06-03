#include <stdio.h> // Inclusión de la biblioteca para entrada y salida de datos

int main() { // Función principal del programa
    int n; // Variable para almacenar el número de términos
    int sum = 0; // Variable para almacenar la suma de los términos
    int i = 1; // Inicializar el contador

    // Ingrese el número de términos
    printf("Ingrese el número de términos para sumar: ");
    scanf("%d", &n); // Leer el número de términos desde la entrada estándar

    // Asegurarse de que el número de términos sea positivo
    if (n <= 0) {
        printf("Por favor, ingrese un número positivo.\n"); // Mensaje de error
        return 1; // Salir del programa con un código de error
    }

    // Calcular la suma de los primeros n términos usando un bucle do-while
    do {
        sum += i; // Sumar el término actual a la suma total
        i++; // Incrementar el término actual
    } while (i <= n); // Repetir mientras el término actual sea menor o igual que el número de términos

    // Imprimir el resultado
    printf("La suma de los primeros %d términos es %d\n", n, sum); // Imprimir la suma

    return 0; // Terminar el programa con un código de éxito
}