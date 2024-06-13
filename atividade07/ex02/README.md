# Atividade 07 - Exercício 02

Considere a definição das estruturas Elemento e Pilha que estão descritas a seguir e que são usadas para a construção de uma pilha com tamanho indefinido em linguagem C (já usadas no exercício anterior).

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

A criação da pilha também foi fornecida no exercício anterior e a função usada para inserir elementos na pilha também deve ser reaproveitada do exercício anterior.


Escreva uma função remover(...) que remove o último elemento de uma pilha e o devolve para o programa chamador da função. A função deve ser independente do tamanho da pilha e por conta disso não foi definido um tamanho máximo. Observe que dentro do arquivo programa.c tanto as definições das estruturas como os protótipos das funções insere(...) (deve ser aproveitada do exercício anterior) e remover(...) já estão presentes. Da mesma maneira, a função consulta, que mostra os elementos da pilha desde o topo (último elemento inserido) até a raiz (primeiro elemento inserido) continua disponível. Ao executar o programa (observe a função main!), o usuário deve entrar com o número de elementos a inserir na pilha. Após todos terem sido inseridos, uma consulta é realizada. Depois disso, uma quantidade pré-definida de elementos deve ser removida. Caso não haja mais elementos a serem removidos, uma mensagem "Pilha Vazia!!" deve ser mostrada e o valor a ser retornado será -1. Depois, uma nova quantidade de elementos é inserida e uma última consulta é realizada.

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
Quantidade a ser removida:
2
7
5
Quantidade a ser inserida:
2
Número a ser inserido:  6
Número a ser inserido:  9
Consulta:
9
6
2
```
