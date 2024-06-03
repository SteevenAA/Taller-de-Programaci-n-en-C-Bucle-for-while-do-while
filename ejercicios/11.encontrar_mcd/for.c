#include <stdio.h> // Inclusión de la biblioteca para entrada y salida de datos

int main() { // Función principal del programa
    int num1, num2; // Declaración de las variables para almacenar los dos números

    // Ingrese los dos números
    printf("Ingrese el primer número: ");
    scanf("%d", &num1); // Leer el primer número desde la entrada estándar

    printf("Ingrese el segundo número: ");
    scanf("%d", &num2); // Leer el segundo número desde la entrada estándar

    int mcd = 1; // Inicializar el MCD con el valor mínimo posible

    // Calcular el MCD utilizando un bucle for
    for (int i = 1; i <= num1 && i <= num2; i++) { // Iterar desde 1 hasta el menor de los dos números
        if (num1 % i == 0 && num2 % i == 0) { // Verificar si el divisor es común a ambos números
            mcd = i; // Actualizar el MCD si encontramos un divisor común
        }
    }

    // Imprimir el resultado del MCD
    printf("El MCD de %d y %d es %d\n", num1, num2, mcd);

    return 0; // Terminar el programa con un código de éxito
}
