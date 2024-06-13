# Atividade 03 - Exercício 3

Crie um programa que verifica se um número digitado pelo usuário é primo. Este programa deve ser baseado em uma função recursiva decideSePrimo(). Esta função recebe como parâmetros 2 valores: o número testado e um divisor. Então, retorna 1 se for primo ou 0 caso contrário. A função recursiva considera 3 situações: 

(i) se divisor ==1, retorna 1

(ii) se número%divisor==0, retorna 0

(iii) caso contrário, retorna decideSePrimo(número, divisor-1) 

Utilize como declaração da função:

```
int decideSePrimo(int num, int div){
     // Código da Função
}
```

## Exemplo de execução:

```
Digite um valor inteiro: 229
O número 229 é primo.
```
