#include<stdio.h>

void cuadrado(int a);

int main(){
    int x;
    for (x = 1; x <= 10; x++){
        cuadrado(x);
    }
    return 0;
}

void cuadrado(int a){
    printf("El cuadrado de %d es %d\n", a, a*a);
}