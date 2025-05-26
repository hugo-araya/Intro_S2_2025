#include <stdio.h>

double valor_abs(double);

int main(){
    double z, y;
    y = -30.8;
    z = valor_abs(valor_abs(y));
    printf("Valor: %lf\n", z);
    return 0;
}

double valor_abs(double x){
    double abs;
    if (x < 0){
        abs = -x;
    }
    else{
        abs = x;
    }
    return abs;
}