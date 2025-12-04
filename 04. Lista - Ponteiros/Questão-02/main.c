/*
2) Na documentação desse código, há o uso dos termos "passagem de parâmetros
por referência/por valor" para algumas funções. Seu contratante pediu que você
explique o que são ambas e qual a diferença, além de pedir uma demonstração
prática por meio da criação de uma função simples de potenciação usando ambas
as abordagens.*/

#include <stdio.h>

int potencia_valor(int base, int expoente){
    /*Quando a função é feita por valor, tudo que é feito dentro da função é por meio de cópias dos conteudos das variaveis, 
    logo não modifica os valores das variaiveis. Afinal não modifica o  conteudo que está no endereço da variável.*/
    int resultado = 1; 
    for(int i = 0; i < expoente; i++) { 
        resultado *= base;
    }
    return resultado;
}

void potencia_referencia(int *base, int expoente){
    /*A função recebe um ponteiro para a variável, e ao modificar *base, ela altera o valor original.*/
    int resultado = 1;
    for(int i = 0; i < expoente; i++){
        resultado *= *base; 
    }
    *base = resultado;
    printf("Resultado (por referência(na função)): %d \n", *base);
}

int main() {
    int base = 2, expoente =2;

    // A base tem o seu valor original igual a 2.
    printf("Valor original da base : %d \n", base); 

    /*Aqui ocorre a função aonde fazemos a potenciação por valor, aonde o valor da variavel base não é alterado, apenas
    utilizado para fazer a operação.*/ 
    printf("Resultado (por valor): %d \n", potencia_valor(base,expoente));
    printf("Valor da base após função de valor : %d \n", base);

    /*Aqui ocorre a função aonde fazemos a potenciação por referência, aonde o valor da variavel é alterado. Assim trocando
    o valor original da base que era dois.*/
    potencia_referencia(&base,expoente);
    printf("Valor da base após função de referência : %d", base);

    return 0;
}