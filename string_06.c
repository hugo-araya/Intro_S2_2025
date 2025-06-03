#include <stdio.h>
#include <string.h>

int main(){
    char texto[]="Gandalf";
    int i;
    int longitud=0;
    i = 0;
    while (texto[i] != '\0') {
        longitud++;
        printf( "%c\n", texto[i] ); /* Mostramos la letra actual */
        i++; /* Vamos a la siguiente letra */
    }
    printf( "La cadena \"%s\" tiene %i caracteres.\n", texto, longitud );
    return 0;
}