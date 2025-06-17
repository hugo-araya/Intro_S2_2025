#include <stdio.h>
#include <string.h>

int main(){
    int i;
    char nombre[30];
    char opcion[5];
    FILE *sal;
    sal = fopen("nombre.dat", "w");
    printf("Ingrese nombre: ");
    fgets(nombre, sizeof(nombre), stdin);
    nombre[strcspn(nombre, "\n")] = '\0';
    fprintf(sal, "%s\n", nombre);
    printf("Continuar s/n");
    fgets(opcion, sizeof(opcion), stdin);
    opcion[strcspn(opcion, "\n")] = '\0';
    while (strcmp(opcion,"n") != 0){
        printf("Ingrese nombre: ");
        fgets(nombre, sizeof(nombre), stdin);
        nombre[strcspn(nombre, "\n")] = '\0';
        fprintf(sal, "%s\n", nombre);
        printf("Continuar s/n");
        fgets(opcion, sizeof(opcion), stdin);
        opcion[strcspn(opcion, "\n")] = '\0';
    }
    //fclose(sal);
    return 0;
}