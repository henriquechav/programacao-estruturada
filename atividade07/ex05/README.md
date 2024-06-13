# Atividade 07 - Exercício 05

A partir dos exercícios anteriores foi possível verificar que é possível fazer a implementação de uma pilha com tamanho indefinido usando ponteiros ao invés de um vetor (array), que por sua vez só funiona quando a pilha tem um tamanho fixo definido. O tipo de implementação usando ponteiros é o usual quando se deseja obter uma estrutura de dados mais genérica e dinâmica, na qual se pode inserir e remover elementos em qualquer posição. A Lista é uma estrutura que herda características tanto de uma pilha como de uma fila e que também possui suas próprias características. 

A partir do códigos discutidos em aula, e da estrutura do programa fornecido, escreva uma função insereNaPosicao(...) que insere um elemento em determinada posição de uma lista encadeada. Observe que dentro do arquivo programa.c as definições das estruturas e o protótipo da função insereNaPosicao(...) já estão disponíveis. Estão incluídas também a função insere(...), que insere elementos no final da lista, a função tamanho(...), que retorna o tamanho atual de uma lista e a função consulta(...), que mostra os elementos em uma lista. 

A função insereNaPosicao(...) deve prever alguns tratamentos de dados para o caso da posição fornecida ser negativa, caso em que a mensagem de erro "Posição inválida!" deve ser impressa, retornando a lista inalterada. Já no caso em que a posição fornecida for maior ou igual ao tamanho atual da lista, a função deve emitir a mensagem "Inserindo elemento no final da lista!", inserir o elemento no final da lista e retirnar a lista atualizada. Nos outros casos o programa não emitirá nenhuma mensagem e apenas retornará a lista atualizada.

Ao executar o programa, observe a função main!. A sequência de saídas é parecida com aquelas dos exercícios anteriores. 

Veja um exemplo de saída para a execução do programa:

```
Quantidade de Elementos:
3
Número a ser inserido:  2
Número a ser inserido:  5
Número a ser inserido:  7
Consulta:
2 5 7
Posição de inserção: 
1
Insere elemento 8 na posição 1.
Consulta:
2 8 5 7
```
