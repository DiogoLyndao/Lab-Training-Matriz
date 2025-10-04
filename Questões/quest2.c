/*
Some todos os elementos de uma matriz 4x4 
de inteiros digitada pelo usuário e mostre o resultado.
*/
#include <stdio.h>
void fill(int mt[4][4]){
	int i,j;
	for(i=0; i < 4; i++){
		for(j = 0; j < 4; j++){
			printf("Valor: ");
			scanf("%d", &mt[i][j]);
		}
	}
	
}

int add_mt(int mt[4][4]){
	int i, j, soma = 0;
	for(i = 0; i <4; i++){
		for(j = 0; j<4; j++){
			soma = soma + mt[i][j];
		}
	}
	
	return soma;
}

int main(){
	int m[4][4];
	
	fill(m);
	printf("O valor da soma é: %d", add_mt(m));
	
}