# Atividade 07 - Exercício 03

Considere a definição das estruturas Elemento e Pilha que estão descritas a seguir e que são usadas para a construção de uma pilha com tamanho indefinido em linguagem C (já foram usadas nos exercícios anteriores).

```
struct Elemento {
    int valor;
    struct Elemento *proximo;
};
typedef struct Elemento Elemento;

struct Pilha {
    struct Elemento *topo; /*aponta para o elemento que está no topo da pilha*/
};
typedef struct Pilha Pilha;
```

A criação da pilha também foi fornecida nos exercícios anteriores e as funções usadas para inserir e remover elementos da pilha também devem ser reaproveitadas dos exercícios anteriores.

Escreva uma função tamanho(...) que retorna um número inteiro, representando o tamanho atual de uma pilha, e o devolve para o programa chamador. A função deve ser independente do tamanho da pilha e por conta disso não foi definido um tamanho máximo. Observe que dentro do arquivo programa.c tanto as definições das estruturas como os protótipos das funções insere(...) e remover(...) (que devem ser reaproveitadas dos exercícios anteriores) e da função  tamanho(...) já estão presentes. Da mesma maneira, a função consulta(...), que mostra os elementos da pilha desde o topo (último elemento inserido) até a raiz (primeiro elemento inserido) continua disponível. Ao executar o programa (observe a função main!), a sequência de saídas é parecida com aquela do exercício anterior, com a única diferença que foram adicionadas algumas chamadas da função tamanho(...). 

Veja um exemplo para a execução do programa:

```
Quantidade a ser inserida:
3
Número a ser inserido:  2
Número a ser inserido:  5
Número a ser inserido:  7
Consulta:
7
5
2
Tamanho da pilha:
3
Quantidade a ser removida:
2
7
5
Tamanho da pilha:
1
Quantidade a ser inserida:
2
Número a ser inserido:  6
Número a ser inserido:  9
Consulta:
9
6
2
Tamanho da pilha: 3
```
