#include <stdio.h> // Inclusión de la biblioteca para entrada y salida de datos

int main() { // Función principal del programa
    // Declarar variables
    int num, inverse = 0, digit; // Variables para almacenar el número ingresado, su inverso y cada dígito

    // Usuario tiene que ingresar un número para la operación
    printf("Ingresa un número: "); // Solicitar al usuario que ingrese un número
    scanf("%d", &num); // Leer el número desde la entrada estándar

    // Se procede a calcular el inverso del número entero ingresado usando un bucle for
    for (int i = num; i != 0; i /= 10) { // Iterar desde el número ingresado hasta que sea igual a cero, dividiendo por 10 en cada iteración
        digit = i % 10; // Extraer el último dígito del número en cada iteración
        inverse = inverse * 10 + digit; // Agregar el dígito al inverso, multiplicándolo por 10 para cambiar de posición
    }

    // Imprimir el resultado en consola
    printf("El inverso de %d es: %d\n", num, inverse); // Imprimir el inverso del número ingresado
    
    return 0; // Terminar el programa con un código de éxito
}