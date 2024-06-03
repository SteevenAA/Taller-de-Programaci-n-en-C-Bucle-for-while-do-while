#include <stdio.h> // Inclusión de la biblioteca para entrada y salida de datos

int main() { // Función principal del programa
    // Declarar variables
    int num, inverse = 0, digit; // Variables para almacenar el número ingresado, su inverso y cada dígito

    // Usuario tiene que ingresar un número para la operación
    printf("Ingresa un número: "); // Solicitar al usuario que ingrese un número
    scanf("%d", &num); // Leer el número desde la entrada estándar

    // Se procede a calcular el inverso del número ingresado usando un bucle do-while
    do {
        digit = num % 10; // Extraer el último dígito del número
        inverse = inverse * 10 + digit; // Agregar el dígito al inverso, multiplicándolo por 10 para cambiar de posición
        num /= 10; // Eliminar el último dígito del número original
    } while (num > 0); // Repetir mientras el número original tenga al menos un dígito

    // Imprimir el resultado en consola
    printf("El inverso es: %d\n", inverse); // Imprimir el inverso del número ingresado
    
    return 0; // Terminar el programa con un código de éxito
}