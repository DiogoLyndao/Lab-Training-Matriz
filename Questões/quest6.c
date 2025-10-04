/*
Multiplique todos os elementos de uma matriz 3x3 por 2.** Mostre a nova matriz.
*/
#include <stdio.h>
#define TAM 3
int  i, j;
void add_mult(int m[3][3]){
    for(i=0; i<TAM; i++){
        for(j=0; j<TAM; j++){
            printf("Insira o valor: ");
            scanf("%d", &m[i][j]);
            m[i][j] *= 2;
        }
    }
}
void show(int mt[3][3]){
    for(i=0; i<TAM; i++){
        for(j=0; j<TAM; j++){
            printf("%d\t", mt[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int mat[TAM][TAM];
    add_mult(mat);
    show(mat);
}