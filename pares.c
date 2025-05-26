#include <stdio.h>

int par(int);
int impar(int);

int main(){
    int n = 2, resultado;
    resultado = par(2);
    if (resultado == 1){
        printf("Es par\n");
    }
    else{
        printf("No es par\n");
    }
    return 0;
}

int impar(int n){
    if (n == 0){
        return 0;
    }
    return par(n-1);
}

int par(int n){
    if (n == 0){
        return 1;
    }
    return impar(n-1);
}