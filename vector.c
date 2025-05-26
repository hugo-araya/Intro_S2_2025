#include <stdio.h>
#define N 10
#define M 100

int main(){
    int a[M];
    int i, numero;
    for (i = 0; i < N; i ++){
        printf("Numero: ");
        scanf("%d", &numero);
        a[i] = numero;
    }

    //Recorrer el arreglo

    for(i = 0; i < N; i++){
        printf("Leido : %d\n", a[i]);
    }
    return 0;
}