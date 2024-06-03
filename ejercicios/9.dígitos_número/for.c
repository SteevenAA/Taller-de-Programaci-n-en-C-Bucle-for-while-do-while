#include <stdio.h> // Inclusión de la biblioteca para entrada y salida de datos

int main() { // Función principal del programa
    int numero; // Variable para almacenar el número ingresado por el usuario
    int contador = 0; // Variable para contar el número de dígitos

    // Ingrese un número entero
    printf("Ingrese un número: ");
    scanf("%d", &numero); // Leer el número desde la entrada estándar

    // Verificar si el número es negativo y convertirlo a positivo
    if (numero < 0) {
        numero = -numero; // Tomar el valor absoluto del número
    }

    // Contar el número de dígitos utilizando un bucle for
    for (; numero != 0; numero /= 10) { // Repetir el bucle mientras el número sea diferente de 0
        contador++; // Incrementar el contador de dígitos
    }

    // Imprimir el resultado
    printf("El número tiene %d dígito(s).\n", contador); // Imprimir el número de dígitos

    return 0; // Terminar el programa con un código de éxito
}
