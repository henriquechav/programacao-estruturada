# Atividade 03 - Exercício 2: 

Criar um programa que gere automaticamente uma matriz 10x5 com inteiros entre 0 e 9. O programa deve então criar uma segunda matriz 5x10 que será a transposta da primeira. Ambas as matrizes devem ser exibidas usando a função desenvolvida no exercício anterior.

Observações:

1 - O tamanho das matrizes pode ser fixado por constantes. Isto pode ser feiro usando a instrução "define" fora da função main. Exemplo: #define M 10

2 - Digitar multiplos valores dá trabalho. Por isso, é útil saber como gerar valores aleatoriamente. O procedimento rand() da biblioteca stdlib.h retorna um valor pseudo-aleatório. Se usarmos "int x = rand()%10;", então x receberá um valor aleatório entre 0 e 9. Esta mesma abordagem deverá ser usada na geração da matriz.

3 - Se o programa for executado múltiplas vezes, a sequência de valores aleatórios será sempre igual. Para controlar a geração de valores, é preciso definir uma semente usando o procedimento "srand(seed)". Faça com que o valor de seed seja forneceido pelo usuário, e então gere a matriz aleatória. Observe que com valores diferentes de seed, as matrizes em diferentes execuções terão diverentes valores. 

## Exemplo de execução:

```
Digite o valor da seed: 0
A matriz é:                                                                     

3 6 7 5 3
5 6 2 9 1 
2 7 0 9 3 
6 0 6 2 6 
1 8 7 9 2 
0 2 3 7 5
9 2 2 8 9  
7 3 6 1 2 
9 3 1 9 4 
7 8 4 5 0                                                                       

A transposta é:                                                                 

3 5 2 6 1 0 9 7 9 7
6 6 7 0 8 2 2 3 3 8
7 2 0 6 7 3 2 6 1 4  
5 9 9 2 9 7 8 1 9 5 
3 1 3 6 2 5 9 2 4 0 
```
