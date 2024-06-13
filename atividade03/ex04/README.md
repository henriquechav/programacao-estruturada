# Atividade 03 - Exercício 4

Na linguagem C, strings (dados de texto) são vetores de caracteres. Estes podem ser inicializados de várias formas como por exemplo: 

`char str1[6] = {'H', 'e', 'l', 'l', 'o', '\0'};` 

`char str2[6] = "World";`

O vetor sempre precisará de espaço para armazenar o caractere '\0' que indica o término da string. A biblioteca string.h contém procedimentos específicos para manipulação de strings. 

Crie um programa em que 2 strings sejam lidas usando o procedimento scanf. Então, o programa deve exibir o resultado das instruções:

strcpy (copia string 1 para string 2),

strcat (concatena string 1 e string 2) e

strlen (comprimento da string 1). 

## Exemplo de execução:

```
Digite a string 1: Hello
Digite a string 2: World
strcpy(str3,str1): Hello
strcat(str1,str2): HelloWorld
strlen(str1): 10 
```
