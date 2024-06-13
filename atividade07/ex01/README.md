# Atividade 07 - Exercício 01

Considere a definição das estruturas Elemento e Pilha que estão descritas a seguir e que são usadas para a construção de uma pilha com tamanho indefinido em linguagem C.

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

A criação da pilha pode ser feita usando uma função *cria(...):

```
Pilha *cria() {
    Pilha *pi = (Pilha *)malloc(
        sizeof(Pilha)); // alocação do ponteiro pi para controlar a pilha
    pi->topo = NULL;
    return pi;
}
```

Escreva uma função insere(...) que coloca elementos em uma pilha. Neste problema não há tamanho máximo para a pilha. Observe que dentro do arquivo programa.c tanto as definições das estruturas como o protótipo da função insere já estão presentes. Da mesma maneira, há uma função consulta(...) que mostra os elementos da pilha desde o topo (último elemento inserido) até a raiz (primeiro elemento inserido). Ao executar o programa (observe a função main!), o usuário deve entrar com o número de elementos a inserir na pilha. Após todos terem sido inseridos, uma consulta é feita. 

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
```
