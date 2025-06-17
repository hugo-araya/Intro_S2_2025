#include <stdio.h>

int main( ){
    int expresion, x = 0;
    expresion = !(1 == x);
        if (! expresion){
        printf("El resultado de la expresión es verdadero");
    }
    else{ 
        printf("El resultado de la expresion es falso");
	}
    return 0;
}