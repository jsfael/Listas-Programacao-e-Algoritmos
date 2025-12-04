/*O sistema está enfrentando problemas com a memória e precisa de um
programa para ajudar a resolver. Após a leitura de 2 variáveis do teclado, a variável
com o maior endereço de memória sempre está incorreta. Sendo assim, foi pedido
que você faça um programa que, ao comparar essas 2 variáveis após a leitura,
informe qual delas possui o maior endereço e qual é esse endereço.*/

#include <stdio.h>

int main(){
    int x,y, maior_valor;
    int *endereco_x, *endereco_y, *maior_endereco;
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de y: ");
    scanf("%d", &y);
    endereco_x = &x;
    endereco_y = &y;
    if(endereco_x > endereco_y){
        maior_endereco = &x;
        maior_valor = x;
    }
    else
    maior_endereco = &y;
    maior_valor = y;
    printf("Maior valor é : %d, no endereço : %x.", maior_valor,&maior_endereco);
    return 0;
}