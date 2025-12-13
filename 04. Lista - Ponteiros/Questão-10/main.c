/*
10) O  sistema  roda  em  uma  máquina  antiga  e  com  diversos  outros  programas 
rodando ao mesmo tempo. Sendo assim, toda eficiência é importante. No entanto, 
uma  função  não  está  sendo  a  mais  eficiente  possível.  Foi  pedido  que  você  refaça 
essa função utilizando alocação dinâmica. Essa função deve ler um número N, criar 
dinamicamente um vetor com esse tamanho N, preenchê-lo com dados do usuário 
e, em seguida, ordená-lo e imprimi-lo. 
*/
#include <stdio.h>
#include <stdlib.h>

void ordenar(int *v, int n){
	for(int i = 0; i < n - 1; i++){
		int min_idx = i;
		for(int j = i + 1; j < n; j++){
			if(v[j] < v[min_idx]){
				min_idx = j;
			}
		}
		if(min_idx != i){
			int tmp = v[i];
			v[i] = v[min_idx];
			v[min_idx] = tmp;
		}
	}
}

int main(){
	int N;
	printf("Digite o tamanho N do vetor: ");
	if(scanf("%d", &N) != 1){
		printf("Entrada inválida.\n");
		return 1;
	}

	int *vetor = (int*) malloc(N * sizeof(int));
	if(vetor == NULL){
		printf("Erro ao alocar memória dinâmica.\n");
		return 1;
	}

	printf("Digite %d inteiros: ", N);
	for(int i = 0; i < N; i++){
		scanf("%d", &vetor[i]);
	}

	ordenar(vetor, N);

	printf("Vetor ordenado:\n");
	for(int i = 0; i < N; i++){
		printf("Índice %d | valor %d | memória %x.\n", i, vetor[i], &vetor[i]);
	}

	free(vetor);
	return 0;
}