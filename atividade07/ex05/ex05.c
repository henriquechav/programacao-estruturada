#include <stdio.h>
#include <stdlib.h>

struct Elemento {
  int valor;
  struct Elemento *proximo;
};
typedef struct Elemento Elemento;

void consulta(Elemento *lista) {
  if (lista == NULL)
      printf("Lista vazia!!\n");
  else {
    for (Elemento *e = lista; e != NULL; e = e->proximo) {
       printf("%d ", e->valor);
    }
    printf("\n");
  }
}

int tamanho(Elemento *lista) {
  int tamanho = 0;
  if (lista == NULL)
      return tamanho;
  else {
    for (Elemento *e = lista; e != NULL; e = e->proximo) {
       tamanho++;
    }
    return tamanho;
  }
}

Elemento *insere(Elemento *lista, int value) {
  Elemento *novo = (Elemento *)malloc(sizeof(Elemento));
  novo->proximo = NULL;
  novo->valor = value;
  Elemento *aux = lista;
  if (aux == NULL) {
    lista = novo;
  } else {
    while (aux->proximo != NULL) {
      aux = aux->proximo;
    }
    aux->proximo = novo;
  }
  return lista;
}

Elemento* insereNaPosicao(Elemento *lista, int value, int posicao) {
    if (posicao < 0) {
        printf("Posição inválida!\n");
        return lista;
    }
    
    if (posicao >= tamanho(lista)) {
        printf("Inserindo elemento no final da lista!\n");
        return insere(lista, value);
    }
    
    Elemento *novo = (Elemento *)malloc(sizeof(Elemento)); 
    novo->valor = value;
    
    // no caso da posição ser 0
    if (posicao == 0) {
        novo->proximo = lista;
        lista = novo;
        
        return lista;
    }
    
    Elemento *aux = lista;
    
    // alcançando o elemento anterior à posição de inserção
    for (int i=0; i < posicao - 1; i++) {
        aux = aux->proximo;
    }
    
    Elemento *novoproximo = aux->proximo;
    
    aux->proximo = novo;
    novo->proximo = novoproximo;
    
    return lista;
}

int main() {
  int n1, p;
  printf("Quantidade de Elementos: \n");
  scanf("%d", &n1);
  Elemento *lista = NULL; // Cria lista encadeada

  for (int i = 0; i < n1; i++) {
    printf("Número a ser inserido: \n");
    int v1;
    scanf("%d", &v1);
    lista = insere(lista, v1);
  }
  printf("Consulta: \n");
  consulta(lista);
  printf("Posição de inserção: \n");
  scanf("%d",&p);
  printf("Insere elemento 8 na posição %d.\n",p);
  lista = insereNaPosicao(lista, 8, p);
  printf("Consulta: \n");
  consulta(lista);
  return 0;
}
