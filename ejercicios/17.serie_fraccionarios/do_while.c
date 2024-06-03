#include <stdio.h> // Inclusión de la biblioteca para entrada y salida de datos

int main() { // Función principal del programa
    int n; // Declaración de la variable para almacenar el valor de n
    double producto = 1.0; // Inicialización del producto como 1.0 para el cálculo
    int i = 1; // Inicialización del contador para el bucle while

    // Solicitar al usuario que ingrese el valor de n
    printf("Ingrese un número entero positivo: ");
    scanf("%d", &n); // Leer el valor de n desde la entrada estándar

    // Asegurar que n sea positivo
    if (n <= 0) { // Si n es menor o igual a cero
        printf("El número debe ser un entero positivo.\n"); // Mostrar un mensaje de error
        return 1; // Salir del programa con un código de error
    }

    // Calcular el producto de la serie utilizando un bucle while
    while (i <= n) { // Bucle while para multiplicar cada término de la serie
        producto *= 1.0 / i; // Multiplicar el producto actual por el término 1/i
        i++; // Incrementar el contador para avanzar al siguiente término de la serie
    }

    // Imprimir el resultado del cálculo del producto de la serie
    printf("El producto de la serie 1 * 1/2 * 1/3 * ... * 1/%d es: %f\n", n, producto);

    return 0; // Terminar el programa con un código de éxito
}