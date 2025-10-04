/*
Crie duas matrizes 2x2 e faça a 
soma elemento por elemento. Exiba a matriz resultado.
*/
#include<stdio.h>
#include <stdio.h>
int main(){
	int m1[2][2] = {{1, 2}, {2, 1}}, m2[2][2] = {{1, 2}, {2, 1}}, result[2][2], i, j;
	// Estrutura que faz a soma das duas matrizes e armazena na matriz result. 
	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			result[i][j] = m1[i][j] + m2[i][j]; // Soma os valores atuais de cada posição da matriz e guarda na posição atual da matriz result.
		}
	}
	// Laço de repetição que mostra a matriz result
	printf("Result: \n");
	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			printf("%d", result[i][j]);
		}
		printf("\n");
	}
}