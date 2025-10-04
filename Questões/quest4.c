/*
Mostre a diagonal secundária de uma matriz 5x5
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	int i, size = 5;
	int matrix[5][5] = {
	{1, 2, 3, 4, 5},
	{1, 2, 3, 4, 5},
	{1, 2, 3, 4, 5},
	{1, 2, 3, 4, 5},
	{1, 2, 3, 4, 5}};
	for(i = 0; i < 5; i++){
		printf("%d\n", matrix[i][size - 1 - i]);
	}
}