#include <stdio.h>
// Calculo Raiz Cuadrada
int main(){
    double n, x0, x1, difer;
    int cont;
    printf("Ingrse numero: ");
    scanf("%lf", &n);
    x0 = n;
    x1 = n + 1;
    difer = x0 - x1;
    if (difer < 0){
        difer = difer * -1;
    }
    cont = 0;
    while (difer > 0.00001 ){
        x1 = (x0 + n/x0)/2;
        difer = x0 - x1;
        if (difer < 0){
            difer = difer * -1;
        }
        x0 = x1;
        cont++;
    }
    printf("La raiz es : %lf\n", x1);
    printf("En %d iteraciones\n", cont);
    return 0;
}