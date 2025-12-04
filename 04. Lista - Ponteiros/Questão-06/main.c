/*
A  fim  de  testes  do  sistema,  foi  pedido  que  você  faça  2  vetores  de  pontos 
flutuantes  de  tamanho  10,  utilizando  2  abordagens:  alocação  estática  e  alocação 
dinâmica.  Após  a  criação,  imprima  o  endereço  de  memória  de  cada  elemento  de 
ambos  os  vetores.  Não  se  esqueça  de  que  a  memória  dinâmica  deve  ser  liberada 
após o uso.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int size = 10;
    
    float vetor[10] = {1,2,3,4,5,6,7,8,9,10};
    for(int i = 0; i < size; i++){
        printf("Índice %d | valor %f | memória %x. \n", i , vetor[i], &vetor[i]);
    }
    printf("\n");
    float *vetor2 = malloc(size * sizeof(float));
    float vetor2_valores[10] = {11,12,13,14,15,16,17,18,19,20};
    for(int i = 0; i < size; i++){
        vetor2[i] = vetor2_valores[i];
        printf("Índice %d | valor %f | memória %x. \n",i, vetor2[i], &vetor2[i]);
    }  
    free(vetor2);
    return 0;
}

