#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_PAIS 100
#define NUM_PAISES 5

// Estructura para almacenar país y su capital
typedef struct {
    char pais[50];
    char capital[50];
} Entrada;

// Convierte cadena a minúsculas
void minusculas(char *cadena) {
    for (int i = 0; cadena[i]; i++) {
        cadena[i] = tolower((unsigned char)cadena[i]);
    }
}

// Programa principal
int main() {
    Entrada datos[NUM_PAISES] = {
        {"Argentina", "Buenos Aires"},
        {"Francia", "Paris"},
        {"España", "Madrid"},
        {"Italia", "Roma"},
        {"Alemania", "Berlin"}
    };

    char entrada[MAX_PAIS];

    while (1) {
        printf("\nIngrese un país o una capital (o 'fin' para salir): ");
        fgets(entrada, sizeof(entrada), stdin);
        entrada[strcspn(entrada, "\n")] = '\0'; // Quitar el salto de línea

        char entradaMin[MAX_PAIS];
        strcpy(entradaMin, entrada);
        minusculas(entradaMin);

        if (strcmp(entradaMin, "fin") == 0) {
            printf("Programa finalizado.\n");
            break;
        }

        int encontrado = 0;
        for (int i = 0; i < NUM_PAISES; i++) {
            char paisMin[50], capitalMin[50];
            strcpy(paisMin, datos[i].pais);
            strcpy(capitalMin, datos[i].capital);
            minusculas(paisMin);
            minusculas(capitalMin);

            if (strcmp(entradaMin, paisMin) == 0) {
                printf("La capital de %s es %s.\n", datos[i].pais, datos[i].capital);
                encontrado = 1;
                break;
            } else if (strcmp(entradaMin, capitalMin) == 0) {
                printf("%s es la capital de %s.\n", datos[i].capital, datos[i].pais);
                encontrado = 1;
                break;
            }
        }

        if (!encontrado) {
            printf("No se encontró el país o capital ingresado.\n");
        }
    }

    return 0;
}
