#include <stdio.h> // Inclusión de la biblioteca para entrada y salida de datos

int main() { // Función principal del programa
    // Declarar variables
    int base, exponente, resultado = 1, count = 1; // Variables para la base, el exponente, el resultado y un contador

    // Usuario tiene que ingresar un número para la operación
    printf("Ingrese la base: "); // Solicitar al usuario que ingrese la base
    scanf("%d", &base); // Leer la base desde la entrada estándar
    printf("Ingrese el número de veces que desea multiplicar la base: "); // Solicitar al usuario que ingrese el exponente
    scanf("%d", &exponente); // Leer el exponente desde la entrada estándar

    // Calcular la potencia utilizando sumas sucesivas con un bucle do-while
    do { // Bucle do-while para calcular la potencia
        resultado *= base; // Multiplicar el resultado por la base
        count++; // Incrementar el contador
    } while (count <= exponente); // Continuar hasta que el contador alcance el exponente

    // Imprimir el resultado de la potencia
    printf("%d^%d = %d\n", base, exponente, resultado); // Imprimir la base, el exponente y el resultado de la potencia

    // Imprimir la expresión de la potencia
    printf("%d", base); // Imprimir la base
    count = 1;  // Reiniciar el contador para la expresión
    do { // Bucle do-while para imprimir la expresión de la potencia
        if (count < exponente) { // Si el contador es menor que el exponente
            printf(" * %d", base); // Imprimir la base con el operador de multiplicación
        }
        count++; // Incrementar el contador
    } while (count <= exponente); // Continuar hasta que el contador alcance el exponente
    printf(" = %d\n", resultado); // Imprimir el resultado final de la expresión

    return 0; // Terminar el programa con un código de éxito
}