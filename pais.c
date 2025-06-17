#include <stdio.h>
#include <string.h>
#define largo 5
int main(){
    char *pais[] = {"Alemania", "Argentina", "Brasil", "China", "Chile"};
    char *capital[] = {"Berlin", "Buenos Aires", "Brasilia", "Beijing", "Santiago"};
    int i;
    char capi[10];
    char capi1[10];
    for (i = 0 ; i < largo; i++){
        printf("%s\n", pais[i]);
    }
    printf("Ingrese un pais: ");
    fgets(capi, 10, stdin);

    for (i = 0; i < 10; i++){
        if (capi[i] != '\n'){
            capi1[i] = capi[i];
        }
    }
    //capi[strcspn(capi, "\n")] = '\0';
    printf("%s %d\n", capi1, strlen(capi1));
    for (i = 0; i < largo; i++){
        if (strcmp(pais[i], capi1) == 0){
            printf("%s su capital es %s\n", pais[i], capital[i]);
        }
    }
    return 0;
}