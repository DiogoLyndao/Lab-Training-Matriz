/*
Mostre a diagonal principal de uma matriz 5x5.
*/
#include <stdio.h>
int main(){
	
	int mt[5][5]= {
	{1, 2, 3, 4, 5}, 
	{1, 2, 3, 4, 5}, 
	{1, 2, 3, 4, 5}, 
	{1, 2, 3, 4, 5}, 
	{1, 2, 3, 4, 5}};
	int i, j;
	
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			
			if(i == j){
				printf("%d ", mt[i][j]);
			}
		}
		
	}


}