#include <stdio.h> // Inclusión de la biblioteca para entrada y salida de datos

int main() { // Función principal del programa
    int num1, num2; // Declaración de las variables para almacenar los dos números

    // Ingrese los dos números
    printf("Ingrese el primer número: ");
    scanf("%d", &num1); // Leer el primer número desde la entrada estándar

    printf("Ingrese el segundo número: ");
    scanf("%d", &num2); // Leer el segundo número desde la entrada estándar

    int mcd = 1; // Inicializar el MCD con el valor mínimo posible
    int divisor = 1; // Inicializar el divisor

    // Calcular el MCD utilizando un bucle while
    while (divisor <= num1 && divisor <= num2) { // Iterar hasta el menor de los dos números
        if (num1 % divisor == 0 && num2 % divisor == 0) { // Verificar si el divisor es común a ambos números
            mcd = divisor; // Actualizar el MCD si encontramos un divisor común
        }
        divisor++; // Incrementar el divisor para evaluar el siguiente número
    }

    // Imprimir el resultado del MCD
    printf("El MCD de %d y %d es %d\n", num1, num2, mcd);

    return 0; // Terminar el programa con un código de éxito
}
