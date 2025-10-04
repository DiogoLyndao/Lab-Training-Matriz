/*
Crie uma matriz 3x3 de inteiros
e peça para o usuário digitar todos 
os elementos. Depois, imprima a matriz formatada.
*/
#include <stdio.h>

void Enter(int mt[3][3]){ // Função para preencer
	int i, j;
	
	for(i = 0; i < 3; i++){
		for(j=0; j < 3; j++){
			printf("Valor da posição vt[%d][%d]: ", i, j);
			scanf("%d", &mt[i][j]);
		}
	}
	
}
// Função para mostrar o resultado
void Show(int mt[3][3]){
	int i, j;
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			printf("%d", mt[i][j]);
		}
		printf("\n");
	}
}

int main(){
	int vt[3][3];
	
	
	Enter(vt);
	Show(vt);	
	
	
}