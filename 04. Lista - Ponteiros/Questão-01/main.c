/*) Você foi contratado para realizar a consultoria de um sistema bastante antigo e
se deparou com o código.

Seus contratantes não sabem se a resposta que o programa está retornando é
correta, pois desconhecem qual é o retorno esperado. Sendo assim, eles pediram
que você analise o programa e informe qual seria o retorno esperado.*/

#include <stdio.h>
int main() {
    int y, *p, x; // y -> inteiro, p -> ponteiro p/ inteiro, x -> inteiro.
    y = 0; // y = 0
    p = &y; // p recebe endereço de y 
    x = *p; // x recebe oq p aponta (que no caso é o valor armazenado no endereço de y, que é zero.)
    x = 4; // se x = 4, ele sobrescreve o valor que tinha recebido anteriormente(zero), porém não altera o valor do ponteiro.
    (*p)++; // p = 0 + 1 = 1
    x--; // x que tinha recebido 4, foi decrementado 1 e virou 3
    (*p) += x; // ponteiro vai receber a soma dele + x ->  ou seja, o novo valor apontado pelo ponteiro é 1 + 3, que é 4 
    printf("y = %d\n", y); // printa o valor de y, que é o valor apontado pelo ponteiro ( quatro )
    return 0;
}