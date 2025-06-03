
#include <stdio.h>

int main(){
    FILE *arch;
    arch = fopen("string_01.c", "r");
    while(!feof(arch)) {
        printf("%c", fgets(arch));
    }
    fclose(arch);
    printf("\n");
    return 0;    
}