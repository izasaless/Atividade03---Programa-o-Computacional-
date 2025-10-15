/* 
 * Nome: Antonia Izabela de Lima Sales
 * Matrícula: [583644]
 * Data: 16/10/2025
 * Ambiente/Ferramenta: OnlineGDB
 */

#include <stdio.h>

int main() {
    // a) Declaração de variáveis
    int inteiro1, inteiro2;
    float real1, real2;
    char caractere1, caractere2;

    // b) Atribuição de valores válidos
    inteiro1 = 10;
    inteiro2 = 20;
    real1 = 5.5;
    real2 = 7.7;
    caractere1 = 'A';
    caractere2 = 'B';

    // c) Troca dos valores das variáveis inteiras sem usar terceira variável
    inteiro1 = inteiro1 + inteiro2; // inteiro1 agora é 30
    inteiro2 = inteiro1 - inteiro2; // inteiro2 agora é 10
    inteiro1 = inteiro1 - inteiro2; // inteiro1 agora é 20

    // d) Testes de atribuição entre tipos diferentes
    /* 
    inteiro1 = real1; // atribuição float para int truncará parte decimal
    real1 = inteiro1;  // atribuição int para float geralmente permitida
    caractere1 = inteiro1; // possível conversão implícita mas pode perder dados
    real2 = caractere2; // char para float conversão implícita para código ASCII
    */

    // e) Operação inválida - divisão por zero
    /*
    int zero = 0;
    int resultado = 10 / zero; 
    */

    // Exibe os resultados da troca
    printf("inteiro1: %d\ninteiro2: %d\n", inteiro1, inteiro2);

    return 0;
}
