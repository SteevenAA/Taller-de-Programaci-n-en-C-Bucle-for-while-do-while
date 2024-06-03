#include <stdio.h> // Inclusión de biblioteca para entrada y salida de datos

// Función para calcular el n-ésimo número triangular
int calcularNumeroTriangular(int n) {
    int numeroTriangular = 0; // Inicialización del número triangular
    for (int i = 1; i <= n; i++) { // Bucle para sumar los números naturales hasta n
        numeroTriangular += i; // Suma el número actual al número triangular
    }
    return numeroTriangular; // Devuelve el número triangular calculado
}

int main() {
    int n; // Declaración de la variable n

    // Solicitar al usuario que ingrese el valor de n
    printf("Ingrese un número entero positivo: ");
    scanf("%d", &n); // Leer el valor de n desde la entrada estándar

    // Verificar si el valor de n es positivo
    if (n <= 0) {
        printf("El número debe ser un entero positivo.\n"); // Mensaje de error
        return 1; // Salir del programa con un código de error
    }

    // Calcular el n-ésimo número triangular utilizando la función definida
    int numeroTriangular = calcularNumeroTriangular(n);

    // Imprimir el resultado del cálculo
    printf("El número triangular de %d es: %d\n", n, numeroTriangular);

    return 0; // Termina el programa con un código de éxito
}