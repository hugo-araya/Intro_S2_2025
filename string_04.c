#include <stdio.h>
#include <string.h>

int main(){
    char texto[]="Gandalf";
    int longitud, tam;
    longitud = strlen(texto);
    tam = sizeof(texto);
    printf( "La cadena \"%s\" tiene %i caracteres.\n", texto, longitud );
    printf( "La cadena \"%s\" tiene %i caracteres.\n", texto, tam );
    return 0;
}