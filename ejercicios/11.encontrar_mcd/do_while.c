#include <stdio.h> // Inclusión de la biblioteca para entrada y salida de datos

int main() { // Función principal del programa
    int num1, num2; // Declaración de las variables para almacenar los dos números

    // Solicitar al usuario que ingrese los dos números
    printf("Ingrese el primer número: ");
    scanf("%d", &num1); // Leer el primer número desde la entrada estándar

    printf("Ingrese el segundo número: ");
    scanf("%d", &num2); // Leer el segundo número desde la entrada estándar

    int mcd = 1; // Inicializar el MCD con el valor mínimo posible
    int divisor = 1; // Inicializar el divisor

    // Calcular el MCD utilizando un bucle do-while
    do {
        if (num1 % divisor == 0 && num2 % divisor == 0) { // Verificar si el divisor es común a ambos números
            mcd = divisor; // Actualizar el MCD si encontramos un divisor común
        }
        divisor++; // Incrementar el divisor para continuar la búsqueda
    } while (divisor <= num1 && divisor <= num2); // Continuar hasta que el divisor supere uno de los números

    // Imprimir el resultado del MCD
    printf("El MCD de %d y %d es %d\n", num1, num2, mcd);

    return 0; // Terminar el programa con un código de éxito
}
