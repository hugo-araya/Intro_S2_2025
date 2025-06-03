#include<stdio.h>
#define MAXIMO 100

double raiz_cuadrada(double n);
void lee_datos(int [], int, int *);
void muestra_datos(int [], int);
float calcula_promedio(int [], int);
float calcula_varianza (int [], int, float);
void muestra_resultado(double desv);

int main(){
    int datos[MAXIMO], cantidad;
    float promedio, varianza;
    double desv;
   
    lee_datos(datos, MAXIMO, &cantidad);
    muestra_datos(datos, cantidad);
    promedio = calcula_promedio(datos, cantidad);
    varianza = calcula_varianza(datos, cantidad, promedio);
    desv = raiz_cuadrada(varianza);
    muestra_resultado(desv);

    return 0;
}

double raiz_cuadrada(double n){
    double x0, x1, difer;
    x0 = n;
    x1 = n + 1;
    difer = x0 - x1;
    if (difer < 0){
        difer = difer * -1;
    }
    while (difer > 0.0001 ){
        x1 = (x0 + n/x0)/2;
        difer = x0 - x1;
        if (difer < 0){
            difer = difer * -1;
        }
        x0 = x1;
    }
    return x1;
}

void lee_datos(int datos[], int N, int *cantidad){
    FILE *arch;
    arch = fopen("entrada.txt", "r");
    int numero;
    *cantidad = 0;
    fscanf(arch, "%d", &numero);
    while (numero != 0){
        datos[*cantidad] = numero;
        (*cantidad)++;
        fscanf(arch, "%d", &numero);       
    } 
    fclose(arch);
}

void muestra_datos(int datos[], int cantidad){
    FILE *arch;
    arch = fopen("salida.txt", "w");
    for (int i = 0; i < cantidad; i++){
        fprintf(arch, "%d\n", datos[i]);
    }
    fclose(arch);
}

float calcula_promedio(int datos[], int cantidad){
    int suma = 0;
    for (int i = 0 ; i < cantidad; i++){
        suma = suma + datos[i];
    }
    return suma / cantidad;
}

float calcula_varianza (int datos[], int cantidad, float promedio){
    float varianza = 0;
    for (int i = 0; i < cantidad; i++){
        varianza = varianza + (datos[i] - promedio)*(datos[i] - promedio);
    }
    return varianza / cantidad;
}

void muestra_resultado(double desv){
    FILE *arch;
    arch = fopen("salida.txt", "a");
    fprintf(arch, "Desviacion %lf\n", desv);
    fclose(arch);
}