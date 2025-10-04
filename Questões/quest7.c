/*
**Conte quantos números pares existem em uma matriz 4x4.**
*/
#include <stdio.h>
#define TAM 4
int i, j;
// Função para preencher a matriz 4x4
void fill(int m[TAM][TAM]){
    for(i=0; i< TAM; i++){
        for(j=0; j<TAM; j++){
            printf("Valor posição [%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }
}
// função para achar os números pares
int search(int m[TAM][TAM]){
    int par=0;
    for(i=0; i<TAM; i++){
        for(j=0; j<TAM; j++){
            if(m[i][j] % 2 == 0){
                par++;
            }
        }
    }
    return par;
}
int main(){
    int mat[TAM][TAM];
    fill(mat);
    printf("O quantidade de números pares é de: %d\n", search(mat));
}