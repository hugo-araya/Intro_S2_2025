#include <stdio.h>
#define FILAS 3
#define COLUMNAS 4

int main(){
    int a[FILAS][COLUMNAS];
    int i, j, numero;
    for (i = 0; i < FILAS; i ++){
        for (j = 0 ; j < COLUMNAS; j ++){
            printf("Numero: ");
            scanf("%d", &numero);
            a[i][j] = numero;
        }
    }

    //Recorrer el arreglo

    for(i = 0; i < FILAS; i++){
        for (j = 0; j < COLUMNAS; j ++){
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}