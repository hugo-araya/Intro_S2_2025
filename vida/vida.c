#include <stdio.h>

void lectura(int [][10], int *, int *, int *);
void muestra(int [][10], int, int);
void inicializa_matriz(int [][10], int, int);
void proceso(int [][10], int [][10], int, int, int);
int cuenta_vecinos(int [][10], int, int);

int main(){
    int mat[10][10], fil, col, ciclos;
    int mat2[10][10];
    inicializa_matriz(mat, 10, 10);
    inicializa_matriz(mat2, 10, 10);
    lectura(mat, &fil, &col, &ciclos);
    muestra(mat, fil,col);
    proceso(mat, mat2, fil, col, ciclos);
    printf("\n\n");
    muestra(mat2, fil,col);
    return 0;
}

void lectura(int m[][10], int *fil, int *col, int *ciclos){
    FILE *ent;
    int k, i, j, p;
    ent = fopen("insectos.txt", "r");
    fscanf(ent, "%d", fil);
    fscanf(ent, "%d", col);
    fscanf(ent, "%d", ciclos);
    fscanf(ent, "%d", &k);
    for(p = 0; p < k; p++){
        fscanf(ent, "%d", &i);
        fscanf(ent, "%d", &j);
        m[i][j] = 1;
    }
    fclose(ent);
}

void muestra(int m[][10], int f, int c){
    int i, j;
    for (i=0; i < f; i++){
        for(j=0; j < c; j++){
            printf("%2d", m[i][j]);
        }
        printf("\n");
    }
}

void inicializa_matriz(int m[][10], int f, int c){
    int i, j;
    for (i=0; i < f; i++){
        for(j=0; j < c; j++){
            m[i][j] = 0;
        }
    }    
}

void proceso(int m1[][10], int m2[][10], int fil, int col, int ciclos){
    int vecinos, i, j;
    for (i = 0; i < fil; i++){
        for(j =0; j < col; j++){
            vecinos = cuenta_vecinos(m1, i, j);
            if (m1[i][j] == 0){
                if (vecinos == 3){
                    m2[i][j] = 1;
                }
            }
            else{
                if ((vecinos == 2) || (vecinos == 3)){
                    m2[i][j] = 1;
                }
            }
        }
    }
}

int cuenta_vecinos(int m[][10], int i, int j){
    int vec = 0;
    // i-1, j-1
    if ((i-1 >= 0) && (j-1 >= 0)){
        vec = vec + m[i-1][j-1];
    }
    // i-1, j
    if ((i-1 >= 0) && (j >= 0)){
        vec = vec + m[i-1][j];
    }
    // i-1, j+1
    if ((i-1 >= 0) && (j+1 < 6)){
        vec = vec + m[i-1][j+1];
    }
    // i, j-1
    if ((i >= 0) && (j-1 >= 0)){
        vec = vec + m[i][j-1];
    }
    // i, j+1
    if ((i >= 0) && (j+1 < 6)){
        vec = vec + m[i][j+1];
    }
    // i+1, j-1
    if ((i+1 < 6) && (j-1 >= 0)){
        vec = vec + m[i+1][j-1];
    }
    // i+1, j
    if ((i+1 < 6) && (j >= 0)){
        vec = vec + m[i+1][j];
    }
    // i+1, j+1
    if ((i+1 < 6) && (j+1 < 6)){
        vec = vec + m[i+1][j+1];
    }
    return vec;
}