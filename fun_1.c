#include<stdio.h>

float f(float);
float g(float);
float h(float, float);

int main(){
    float x = 3, salida;
    salida = f(x);
    printf("Resultado de f(%f) = %f\n", x, salida);
    salida = g(x);
    printf("Resultado de g(%f) = %f\n", x, salida);
    salida = g(f(x));
    printf("Resultado de g(f(%f)) = %f\n", x, salida);
    salida = h(f(x), g(x));
    printf("Resultado de h(f(%f) + g(%f)) = %f\n", f(x), g(x), salida);
    return 0;
}

float f(float x){
    float resultado;
    resultado = 2 * x + 1;
    return resultado;
}

float g(float x){
    float resultado;
    resultado = x * x;
    return resultado;
}

float h(float x, float y){
    float resultado;
    resultado = x + y;
    return resultado;
}