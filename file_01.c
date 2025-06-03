
#include <stdio.h>

int main(){
    FILE *arch;
    char carac;
    arch = fopen("string_01.c", "r");
    while(!feof(arch)) {
        carac = fgetc(arch);
        if (carac != -1){
            printf("%c", carac);
        }
    }
    fclose(arch);
    printf("\n");
    return 0;    
}