#include <stdio.h> // Inclusión de la biblioteca para entrada y salida de datos

int main() { // Función principal del programa
    int n; // Declaración de la variable para almacenar el valor de n
    int suma = 0; // Inicialización de la suma como 0 para el cálculo
    int i = 1; // Inicialización del contador para el bucle do-while en 1

    // Solicitar al usuario que ingrese el valor de n
    printf("Ingrese un número entero positivo: ");
    scanf("%d", &n); // Leer el valor de n desde la entrada estándar

    // Asegurar que n sea positivo
    if (n <= 0) { // Si n es menor o igual a cero
        printf("El número debe ser un entero positivo.\n"); // Mostrar un mensaje de error
        return 1; // Salir del programa con un código de error
    }

    // Calcular la suma de los cuadrados utilizando un bucle do-while
    do { // Bucle do-while para sumar los cuadrados de los primeros n números naturales
        suma += i * i; // Sumar el cuadrado del número actual i a la suma
        i++; // Incrementar el contador para avanzar al siguiente número natural
    } while (i <= n); // Repetir hasta que el contador llegue a n

    // Imprimir el resultado de la suma de los cuadrados
    printf("La suma de los cuadrados de los primeros %d números naturales es: %d\n", n, suma);

    return 0; // Terminar el programa con un código de éxito
}