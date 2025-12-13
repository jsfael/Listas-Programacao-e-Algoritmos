/*
8) Para lidar com o bug estranho no sistema, onde apenas os números pares de um 
vetor  lido  pelo  teclado  estão  incorretos,  o  contratante  pediu  que  você  faça  um 
pequeno  programa  que  tenha  um  vetor  de  5  inteiros  com  números  lidos  pelo 
usuário.  Após  a  leitura,  imprima  apenas  os  endereços  de  memória  dos  números 
pares.
*/
#include <stdio.h>

int main(){
	int size = 5;
	int vetor[5];

	printf("Digite %d inteiros: ", size);
	for(int i = 0; i < size; i++){
		scanf("%d", &vetor[i]);
	}

	printf("Endereços dos números pares:\n");
	for(int i = 0; i < size; i++){
		if(vetor[i] % 2 == 0){
			printf("Índice %d | valor %d | memória %x.\n", i, vetor[i], &vetor[i]);
		}
	}

	return 0;
}