#include <stdio.h> // Inclusión de la biblioteca para entrada y salida de datos

// Función para calcular el n-ésimo número triangular
int calcularNumeroTriangular(int n) {
    int numeroTriangular = 0; // Inicializa la variable que almacenará el número triangular
    int contador = 1;         // Inicializa un contador en 1
    do {
        numeroTriangular += contador; // Agrega el valor del contador al número triangular
        contador++;                   // Incrementa el contador
    } while (contador <= n);           // Repite hasta que el contador alcance el valor de n
    return numeroTriangular;          // Devuelve el número triangular calculado
}

int main() {
    int n; // Declara la variable para almacenar el valor de n

    // Solicita al usuario que ingrese el valor de n
    printf("Ingrese un número entero positivo: ");
    scanf("%d", &n);

    // Verifica si n es positivo
    if (n <= 0) {
        printf("El número debe ser un entero positivo.\n"); // Muestra un mensaje de error si n no es positivo
        return 1; // Termina el programa con un código de error
    }

    // Calcula el n-ésimo número triangular utilizando la función definida anteriormente
    int numeroTriangular = calcularNumeroTriangular(n);

    // Imprime el resultado
    printf("El número triangular de %d es: %d\n", n, numeroTriangular); // Muestra el número triangular calculado

    return 0; // Termina el programa con un código de éxito
}