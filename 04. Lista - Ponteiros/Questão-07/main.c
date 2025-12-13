/*
Desejando verificar se o resultado será diferente para uma matriz em vez de um 
vetor,  realize  o  mesmo  procedimento  feito  no  problema  anterior,  mas  desta  vez 
utilizando uma matriz 3x3 de pontos flutuantes com as 2 abordagens diferentes. 
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int linha = 3;
	int coluna = 3;

	float matriz[3][3] = {
		{1.0f, 2.0f, 3.0f},
		{4.0f, 5.0f, 6.0f},
		{7.0f, 8.0f, 9.0f}
	};

	printf("Matriz estática (3x3) — valores e endereços:\n");
	for(int i = 0; i < linha; i++){
		for(int j = 0; j < coluna; j++){
			printf("Índice (%d,%d) | valor %f | memória %x.\n", i, j, matriz[i][j], &matriz[i][j]);
		}
	}

	printf("\n");

	float *md = (float*) malloc(linha * coluna * sizeof(float));
	if(md == NULL){
		printf("Erro ao alocar memória dinâmica.\n");
		return 1;
	}

	float valores[9] = {10.0f,11.0f,12.0f,13.0f,14.0f,15.0f,16.0f,17.0f,18.0f};
	for(int i = 0; i < linha; i++){
		for(int j = 0; j < coluna; j++){
			int idx = i * coluna + j;
			md[idx] = valores[idx];
		}
	}

	printf("Matriz dinâmica (3x3) — valores e endereços:\n");
	for(int i = 0; i < linha; i++){
		for(int j = 0; j < coluna; j++){
			int idx = i * coluna + j;
			printf("Índice (%d,%d) | valor %f | memória %x.\n", i, j, md[idx], &md[idx]);
		}
	}

	free(md);
	return 0;
}
