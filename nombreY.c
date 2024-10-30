#include <stdio.h>

int main() {
    char nombre[50]; 
    int i, longitud;

    printf("¿Cuantas letras tiene tu nombre? ");
    scanf("%d", &longitud);

    for (i = 0; i < longitud; i++) {
        printf("Letra %d: ", i + 1 );
        scanf(" %c", &nombre[i]);
    }

    // Terminar la cadena con un caracter nulo
    nombre[longitud] = '\0';
    
    printf("\nEl nombre es: %s\n", nombre);

    return 0; 
}
