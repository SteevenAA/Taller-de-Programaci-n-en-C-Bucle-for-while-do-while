#include <stdio.h> // Inclusión de la biblioteca para entrada y salida de datos
#include <stdbool.h> // Inclusión de la biblioteca para tipos de datos booleanos

// Función para verificar si un número es primo
bool esPrimo(int num) { // Declaración de la función para verificar si un número es primo
    if (num <= 1) { // Si el número es menor o igual a 1
        return false; // No es primo
    }
    for (int i = 2; i * i <= num; i++) { // Bucle para verificar divisibilidad desde 2 hasta la raíz cuadrada del número
        if (num % i == 0) { // Si el número es divisible por i
            return false; // No es primo
        }
    }
    return true; // Si no se encontró ningún divisor, el número es primo
}

int main() { // Función principal del programa
    int n; // Declaración de la variable para almacenar el valor de n
    int contadorPrimos = 0; // Inicialización del contador de números primos
    int numeroActual = 2; // Inicialización del número actual que se está evaluando, comenzamos desde el primer número primo

    // Solicitar al usuario que ingrese el valor de n
    printf("Ingrese un número entero positivo: ");
    scanf("%d", &n); // Leer el valor de n desde la entrada estándar

    // Asegurar que n sea positivo
    if (n <= 0) { // Si n es menor o igual a cero
        printf("El número debe ser un entero positivo.\n"); // Mostrar un mensaje de error
        return 1; // Salir del programa con un código de error
    }

    // Contar cuántos números primos hay desde 1 hasta n
    do { // Bucle do-while para recorrer todos los números desde 2 hasta n
        if (esPrimo(numeroActual)) { // Si el número actual es primo
            contadorPrimos++; // Incrementar el contador de números primos
        }
        numeroActual++; // Pasar al siguiente número para verificar si es primo
    } while (numeroActual <= n); // Repetir hasta llegar al número n

    // Imprimir el resultado del conteo de números primos
    printf("Hay %d números primos desde 1 hasta %d.\n", contadorPrimos, n);

    return 0; // Terminar el programa con un código de éxito
}