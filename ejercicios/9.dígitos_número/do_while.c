#include <stdio.h> // Inclusión de la biblioteca para entrada y salida de datos

int main() { // Función principal del programa
    int numero; // Variable para almacenar el número ingresado por el usuario
    int contador = 0; // Variable para contar el número de dígitos

    // Solicitar al usuario que ingrese un número
    printf("Ingrese un número: ");
    scanf("%d", &numero); // Leer el número desde la entrada estándar

    // Verificar si el número es negativo y convertirlo a positivo
    if (numero < 0) {
        numero = -numero; // Tomar el valor absoluto del número
    }

    // Contar el número de dígitos utilizando un bucle do-while
    do {
        numero /= 10; // Dividir el número por 10 para eliminar el último dígito
        contador++; // Incrementar el contador de dígitos
    } while (numero != 0); // Repetir el bucle mientras el número sea diferente de 0

    // Imprimir el resultado
    printf("El número tiene %d dígito(s).\n", contador); // Imprimir el número de dígitos

    return 0; // Terminar el programa con un código de éxito
}