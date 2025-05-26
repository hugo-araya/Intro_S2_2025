#include <stdio.h>
#define MAXIMO 10

int main(){
    int vector[MAXIMO], i, suma = 0; // n es un arreglo de 10 enteros
    int tamano;
    // inicializa los elementos n a 0 del arreglo 
    printf("Indique la cantidad de elementos: ");
    scanf("%d", &tamano);
    for ( i = 0; i < tamano; i++ ) {
        printf("Elemento [%d] ", i);
        scanf("%d",&vector[i]);
    }
    printf( "Elemento Valor\n" );
    // muestra el contenido del arreglo n en forma tabular
    for ( i = 0; i < tamano; i++ ) {
        printf( "%5d%13d\n", i, vector[i] );
        suma = suma + vector[i];
    }
    printf("             -----\n%18d\n", suma);
    return 0;
}