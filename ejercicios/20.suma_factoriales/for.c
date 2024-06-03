#include <stdio.h> // Inclusión de biblioteca para entrada y salida de datos

// Función para calcular el factorial de un número
int factorial(int num) {
    int fact = 1; // Inicializa el factorial en 1
    for (int i = 1; i <= num; i++) { // Bucle for para calcular el factorial
        fact *= i;  // Multiplica fact por i
    }
    return fact; // Retorna el factorial calculado
}

int main() {
    int n; // Declaración de la variable para almacenar el número ingresado por el usuario

    // Solicitar al usuario que ingrese el valor de n
    printf("Ingrese un número entero positivo: ");
    scanf("%d", &n); // Escanea el número ingresado por el usuario

    // Verificar si n es positivo
    if (n <= 0) { // Si n es menor o igual a cero
        printf("El número debe ser un entero positivo.\n"); // Muestra un mensaje de error
        return 1; // Sale del programa con código de error
    }

    // Calcular la suma de los factoriales de los primeros n números
    int sumaFactoriales = 0; // Inicializa la suma de factoriales en 0
    for (int i = 1; i <= n; i++) { // Bucle for para calcular la suma de factoriales
        sumaFactoriales += factorial(i); // Agrega el factorial de i a la suma
    }

    // Imprimir el resultado en consola
    printf("La suma de los factoriales de los primeros %d números es: %d\n", n, sumaFactoriales); // Imprime la suma de factoriales

    return 0; // Termina el programa con un código de éxito
}