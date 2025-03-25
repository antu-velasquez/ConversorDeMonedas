#include <stdio.h>

int main() {
    float cantidad, resultado;
    int opcion;

    printf("Selecciona la conversión:\n");
    printf("1. Quetzales a Dólares\n");
    printf("2. Quetzales a Euros\n");
    printf("3. Dólares a Quetzales\n");
    printf("4. Dólares a Euros\n");
    printf("5. Euros a Quetzales\n");
    printf("6. Euros a Dólares\n");
    scanf("%d", &opcion);

    printf("Ingresa la cantidad: ");
    scanf("%f", &cantidad);

    switch (opcion) {
        case 1: resultado = cantidad / 7.8; break; // Tipo de cambio aproximado.
        case 2: resultado = cantidad / 8.5; break; // Tipo de cambio aproximado.
        case 3: resultado = cantidad * 7.8; break; 
        case 4: resultado = cantidad / 0.92; break; // Tipo de cambio aproximado.
        case 5: resultado = cantidad * 8.5; break;
        case 6: resultado = cantidad * 0.92; break;
        default: printf("Opción inválida\n"); return 1; 
    }

    printf("Resultado: %.2f\n", resultado);
    return 0;
}
