#include <stdio.h>

int main() {
    char nombre[50]; 

    printf("Ingrese su nombre: ");
    scanf("%s", nombre);
    
    printf("Hola, %s. Bienvenido!\n", nombre);
    
    return 0;
}