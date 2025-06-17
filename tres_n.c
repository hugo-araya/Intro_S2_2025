#include <stdio.h>

int tres(int);
int ciclo(int, int);

int main(){
    int largo, inicio, final;
    FILE *ent;
    FILE *sal;
    ent = fopen("numeros.txt", "r");
    sal = fopen("num_salida.txt", "w");
    while(!feof(ent)){
        fscanf(ent,"%d", &inicio);
        fscanf(ent, "%d", &final);
        largo = ciclo(inicio, final);
        fprintf(sal,"%d %d %d\n",inicio, final, largo);
    }
    fclose(ent);
    fclose(sal);
    return 0;
}

int tres(int n){
    int contador;
    contador = 1;
    while (n != 1){
        if (n%2 == 0){
            n = n / 2;
        }
        else{
            n = 3 * n + 1;
        }
        contador++;
    }
    return contador;
}

int ciclo(int inicio, int final){
    int i, largo;
    int mayor = 0;
    i = inicio;
    while (i < final){
        largo = tres(i);
        if (largo > mayor){
            mayor = largo;
        }
        i++;
    }  
    return mayor;
}