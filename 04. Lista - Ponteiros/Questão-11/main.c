/*
11) Uma outra função no sistema que deve ser atualizada para utilizar ponteiros é 
aquela  que  transforma  letras  minúsculas  em  um  vetor  em  letras  maiúsculas.  Foi 
pedido  que  você  pesquise  e  estude  sobre  a  função  em  C  que  transforma  um 
caractere minúsculo em maiúsculo. 
*/
#include <stdio.h>
#include <ctype.h>

void paraMaiusculas(char *s){
	if(s == NULL) return;
	for(char *p = s; *p != '\0'; p++){
		*p = (char) toupper((unsigned char)*p);
	}
}

int main(){
	char texto[100]; 

	printf("Digite um texto (até 100 chars): ");
	if(fgets(texto, sizeof(texto), stdin) == NULL){
		printf("Falha na leitura.\n");
		return 1;
	}

	printf("Antes:\n");
	for(int i = 0; texto[i] != '\0'; i++){
		printf("Índice %d | char '%c' | memória %x.\n", i, texto[i], &texto[i]);
	}

	paraMaiusculas(texto);

    printf("Depois:\n");
	for(int i = 0; texto[i] != '\0'; i++){
		printf("Índice %d | char '%c' | memória %x.\n", i, texto[i], &texto[i]);
	}

	return 0;
}