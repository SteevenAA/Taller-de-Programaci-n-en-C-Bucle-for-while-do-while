#include <stdio.h> // Inclusión de la biblioteca para entrada y salida de datos

int main() { // Función principal del programa
    int n; // Declaración de la variable para almacenar el valor de n
    double suma = 0.0; // Inicialización de la suma como 0.0 para el cálculo
    int i = 1; // Inicialización del contador para el bucle do-while en 1

    // Solicitar al usuario que ingrese el valor de n
    printf("Ingrese un número entero positivo: ");
    scanf("%d", &n); // Leer el valor de n desde la entrada estándar

    // Asegurar que n sea positivo
    if (n <= 0) { // Si n es menor o igual a cero
        printf("El número debe ser un entero positivo.\n"); // Mostrar un mensaje de error
        return 1; // Salir del programa con un código de error
    }

    // Calcular la suma de la serie utilizando un bucle do-while
    do { // Bucle do-while para sumar cada término de la serie
        suma += 1.0 / i; // Sumar el término actual 1/i a la suma
        i++; // Incrementar el contador para avanzar al siguiente término de la serie
    } while (i <= n); // Repetir hasta que el contador llegue a n

    // Imprimir el resultado de la suma de la serie
    printf("La suma de la serie 1 + 1/2 + 1/3 + ... + 1/%d es: %f\n", n, suma);

    return 0; // Terminar el programa con un código de éxito
}