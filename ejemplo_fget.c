#include <stdio.h>
#include <string.h>
int main () {
    // Variable de cadena
    char nombre[20];
    char saludo[20];
    printf ( "Ingrese su nombre: \n" );
    fgets ( nombre , sizeof ( nombre ), stdin );
    strcpy(saludo, "Hola ");
    strcat (saludo, nombre);
    fputs ( saludo, stdout );
    return 0 ;
}