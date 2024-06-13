# Atividade 08 - Exercício 02

Escreva uma função buscaChave(...) que use a estratégia de busca linear e retorne uma struct sVetor, composta por um vetor contendo todas as posições em que uma determinada chave inteira é encontrada em um vetor de números inteiros. Adicionalmente, a struct sVetor deve trazer um inteiro contendo o tamanho do vetor de inteiros da struct. Caso a chave não seja encontrada, a struct sVetor que a função buscaChave(...) retorna será composta de um vetor contendo apenas o valor -1 (uma posição). Observe que o protótipo da função buscaChave(...) já está criado no programa.  Observe que a definição da struct  sVetor pressupõe a definição de um vetor flexível de inteiros com tamanho indefinido. Com isso, a função buscaChave(...) deve necessariamente alocar memória para  a struct (e seu vetor) que será devolvida. Como exemplo, uma possível sintaxe para alocar memória para um ponteiro str do tipo struct sVector, com um vetor de duas posições será:

`struct sVetor *str = (struct sVetor *)malloc(sizeof(struct sVetor) + sizeof(int[2]))`

Veja um exemplo para a execução do programa:

```
Digite o tamanho do vetor: 
3
Digite o valor: 2
Digite o valor: 5
Digite o valor: 7
Digite o valor: 5
Vetor digitado: 
2 5 7 5  
Digite a chave: 
5
Mostra os índices da chave:
1 3 
```
