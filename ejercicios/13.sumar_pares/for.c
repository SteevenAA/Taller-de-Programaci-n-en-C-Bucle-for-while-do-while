#include <stdio.h> // Inclusión de la biblioteca para entrada y salida de datos

int main() { // Función principal del programa
    int n; // Declaración de la variable para almacenar el valor de n
    int suma = 0; // Inicialización de la suma como 0 para el cálculo

    // Solicitar al usuario que ingrese el valor de n
    printf("Ingrese un número entero positivo: ");
    scanf("%d", &n); // Leer el valor de n desde la entrada estándar

    // Asegurarse si n es positivo
    if (n <= 0) { // Si n es menor o igual a cero
        printf("El número debe ser un entero positivo.\n"); // Mostrar un mensaje de error
        return 1; // Salir del programa con un código de error
    }

    // Calcular la suma de los números pares utilizando un bucle for
    for (int i = 2; i <= n; i += 2) { // Bucle for para sumar los números pares desde 2 hasta n
        suma += i; // Sumar el número actual i a la suma
    }

    // Imprimir el resultado de la suma de los números pares
    printf("La suma de todos los números pares desde 1 hasta %d es: %d\n", n, suma);

    return 0; // Terminar el programa con un código de éxito
}
