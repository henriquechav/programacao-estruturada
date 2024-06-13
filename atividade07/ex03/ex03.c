#include <stdio.h>
#include <stdlib.h>

struct Elemento {
  int valor;
  struct Elemento *proximo;
};
typedef struct Elemento Elemento;

struct Pilha {
  struct Elemento *topo; /*aponta para o elemento que esta no topo da pilha*/
};
typedef struct Pilha Pilha;

Elemento *aux;

Pilha *cria() {
  Pilha *pi = (Pilha *)malloc(
      sizeof(Pilha)); // alocação do ponteiro pi para controlar a pilha
  pi->topo = NULL;
  return pi;
}

void insere(Pilha *pi) {
    Elemento *novo = (Elemento *)malloc(sizeof(Elemento));
    int x = 0;
    
    printf("Número a ser inserido: \n");
    scanf("%d", &x);
    novo->valor = x;
    
    novo->proximo = pi->topo;
    pi->topo = novo;
}

int remover(Pilha *pi) {
    if (pi->topo == NULL) {
        printf("Pilha Vazia!!");
        return -1;
    }
    
    aux = pi->topo;
    pi->topo = pi->topo->proximo;
    return aux->valor; 
}

int tamanho(Pilha *pi) {
    if (pi->topo == NULL) {
        return 0;
    } 
    
    int tamanho = 0;
    
    aux = pi->topo;
    do {
        tamanho++;
        aux = aux->proximo;
    } while (aux != NULL);
    
    return tamanho;
}


void consulta(Pilha *pi) {
  if (pi->topo == NULL) {
    printf("Pilha Vazia!!\n");
  } else {
    aux = pi->topo;
    do {
      printf("%d\n", aux->valor);
      aux = aux->proximo;
    } while (aux != NULL);
  }
}

int main() {
  Pilha *pi = cria();
  int e1, e2, r, v;
  printf("Quantidade a ser inserida: \n");
  scanf("%d",&e1);
  for (int i = 0; i < e1; i++) {
      insere(pi);
  }
  printf("Consulta: \n");
  consulta(pi);
  printf("Tamanho da pilha: \n");
  printf("%d\n", tamanho(pi));
  printf("Quantidade a ser removida: \n");
  scanf("%d",&r);
  for (int i = 0; i < r; i++) {
      v = remover(pi);
      printf("%d\n",v);
  }
  printf("Tamanho da pilha: \n");
  printf("%d\n", tamanho(pi));
  printf("Quantidade a ser inserida: \n");
  scanf("%d",&e2);
  for (int i = 0; i < e2; i++) {
      insere(pi);
  }
  printf("Consulta: \n");
  consulta(pi);
  printf("Tamanho da pilha: \n");
  printf("%d\n", tamanho(pi));
  return 0;
}
