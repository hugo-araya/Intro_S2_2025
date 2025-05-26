#include <stdio.h>
#define MAXIMO 10

int main(){
    int vector[MAXIMO], sal[MAXIMO], i, suma = 0; // n es un arreglo de 10 enteros
    int tamano, j, k;

    // Leer los elementos n a 0 del arreglo 
    printf("Indique la cantidad de elementos: ");
    scanf("%d", &tamano);
    for ( i = 0; i < tamano; i++ ) {
        printf("Elemento [%d] ", i);
        scanf("%d",&vector[i]);
    }

    // Proceso
    k = 0;
    for (i = 0; i < tamano; i++){
        for (j = 0; j < tamano; j++){
            if (vector[i] == vector[j]){
                sal[k] = vector[i];
                k++;
            }
        }
    }

    // muestra el contenido del arreglo n en forma tabular
    for ( i = 0; i < tamano; i++ ) {
        printf( "%5d%13d\n", i, vector[i] );
    }

    printf("----------------\n");
    for ( i = 0; i < k; i++ ) {
        printf( "%5d%13d\n", i, sal[i] );
    }
    return 0;
}