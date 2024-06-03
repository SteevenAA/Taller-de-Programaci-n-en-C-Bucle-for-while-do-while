#include <stdio.h> // Inclusión de la biblioteca para entrada y salida de datos

int main() { // Función principal del programa
    // Declarar variables
    int base, multiplicador, resultado = 1; // Variables para la base, el multiplicador, y el resultado de la potencia
    int exponente = 0; // Variable para almacenar el exponente ingresado por el usuario

    // Usuario tiene que ingresar un número para la operación
    printf("Ingrese la base: "); // Solicitar al usuario que ingrese la base
    scanf("%d", &base); // Leer la base desde la entrada estándar
    printf("Ingrese el número de veces que desea multiplicar la base: "); // Solicitar al usuario que ingrese el exponente
    scanf("%d", &exponente); // Leer el exponente desde la entrada estándar

    // Calcular la potencia utilizando sumas sucesivas
    for (int i = 0; i < exponente; i++) { // Bucle for para realizar la multiplicación repetida
        resultado *= base; // Multiplicar el resultado por la base
    }

    // Imprimir el resultado de la potencia
    printf("%d^%d = %d\n", base, exponente, resultado); // Imprimir la base, el exponente y el resultado de la potencia

    // Imprimir la expresión de la potencia
    printf("%d", base); // Imprimir la base
    for (int i = 1; i < multiplicador; i++) { // Bucle for para imprimir la expresión de la potencia
        printf(" * %d", base); // Imprimir la base con el operador de multiplicación
    }
    printf(" = %d\n", resultado); // Imprimir el resultado final de la expresión

    return 0; // Terminar el programa con un código de éxito
}