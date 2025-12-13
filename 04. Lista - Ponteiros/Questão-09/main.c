/*
9)  Para  atender  à  demanda  de  modificar  uma  função  no  sistema  para  que  ela 
receba os parâmetros por referência, foi solicitado que você refaça essa função que 
inverte um número dado (231 vira 132) com essa nova exigência.
*/
#include <stdio.h>


void inverterNumero(int *valor){
	if(valor == NULL) return;

	int n = *valor;
	int negativo = 0;
	if(n < 0){
		negativo = 1;
		n = -n;
	}

	int invertido = 0;
	while(n > 0){
		int dig = n % 10;
		invertido = invertido * 10 + dig;
		n /= 10;
	}

	if(negativo) invertido = -invertido;
	*valor = invertido;
}

int main(){
	int numero;

	printf("Digite um inteiro : ");
	scanf("%d", &numero);

	printf("Original | valor %d | memória %x.\n", numero, &numero);

	inverterNumero(&numero);

	printf("Invertido | valor %d | memória %x.\n", numero, &numero);

	return 0;
}