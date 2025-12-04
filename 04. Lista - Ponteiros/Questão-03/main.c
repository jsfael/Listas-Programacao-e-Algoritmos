/*
3) Na documentação são feitas várias referências aos termos na tabela abaixo. Os
contratantes pediram que você faça uma breve explicação de cada um deles:
•
 Um ponteiro
•
 Um ponteiro para ponteiro
•
 O endereço de um ponteiro
•
 O conteúdo de um ponteiro
•
 O endereço de uma variável
 */
#include <stdio.h>
void ponteiro(){
    // Um ponteiro é uma variavel que armazena o endereço de memória de outra variavel 
    int x = 10;
    int *p = &x;
}
void ponteiroPP() {
    // Um ponteiro para ponteiro é uma variavel que guarda o endereço de um ponteiro que aponta para outra coisa
    int x = 10;
    int *p = &x;
    int **p2 = &p;
}
void enderecoPonteiro(){
    // Assim como qualqualquer variável, o ponteiro também tem seu endereço de memória.
    int x = 10;
    int *p = &x;
    printf("Endereço do Ponteiro: %x\n", &p);
}
void conteudoPonteiro(){
    // O conteúdo de um ponteiro é o valor apontado por uma variavel.
    int x = 10;
    int *p = &x;
    printf("Conteudo do Ponteiro: %d\n", *p);
}
void enderecoVariavel(){
    // Cada variavel tem seu endereço de memória 
    int x = 10;
    printf("Endereço de uma Variavel: %x\n", &x);
}

 int main() {
    enderecoPonteiro();
    conteudoPonteiro();
    enderecoVariavel();
    return 0;
 }