#include <stdio.h>
#include <stdlib.h>

struct Elemento {
  int valor;
  struct Elemento *proximo;
};
typedef struct Elemento Elemento;

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

Elemento *removeUltimo(Elemento *lista) {
    Elemento *aux = lista;
    Elemento *lixo;
    
    if (aux == NULL) {
        return lista;
    } 
    
    if (aux->proximo == NULL) {
        free(aux);
        return lista;
    }
    
    while (aux->proximo->proximo != NULL) {
        aux = aux->proximo;
    }
    
    lixo = aux->proximo;
    aux->proximo = NULL;
    free(lixo);
    return lista;
    
}

int main() {
  int n1;
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
  printf("Remove último elemento...\n");
  removeUltimo(lista);
  printf("Consulta: \n");
  consulta(lista);
  return 0;
}
