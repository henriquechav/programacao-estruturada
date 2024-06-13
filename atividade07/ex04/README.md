# Atividade 07 - Exercício 04

A partir dos exercícios anteriores foi possível verificar que é possível fazer a implementação de uma pilha com tamanho indefinido usando ponteiros ao invés de um vetor (array), que por sua vez só funciona quando a pilha tem um tamanho fixo definido. O tipo de implementação usando ponteiros é o usual quando se deseja obter uma estrutura de dados mais genérica e dinâmica, na qual se pode inserir e remover elementos em qualquer posição. A Lista é uma estrutura que herda características tanto de uma pilha como de uma fila e que também possui suas próprias características. 

Assim, considere a definição das estruturas Elemento e Lista que estão descritas a seguir e que são usadas para a construção de uma lista encadeada em linguagem C.

```
struct Elemento {
    int valor;
    struct Elemento *proximo;
};
typedef struct Elemento Elemento
```

A partir do códigos discutidos em aula, e da estrutura do programa fornecido, escreva uma função removeUltimo(...) que remove o último elemento de uma lista encadeada. Observe que dentro do arquivo programa.c tanto as definições das estruturas como o protótipo da função removeUltimo(...) já estão disponíveis. Estão incluídas também a função insere(...), que insere elementos no final da lista, e a função consulta(...), que mostra os elementos em uma lista. Ao executar o programa (observe a função main!), a sequência de saídas é parecida com aquelas dos exercícios anteriores. 

Veja um exemplo para a execução do programa:

```
Quantidade de Elementos:
3
Número a ser inserido:  2
Número a ser inserido:  5
Número a ser inserido:  7
Consulta:
2 5 7
Remove último elemento...
Consulta:
2 5
```
