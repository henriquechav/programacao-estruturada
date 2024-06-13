#include <stdio.h>

void BubbleSort(int v[], int  n) {
    int aux;
    for (int k = n-1; k >= 1; k--) {
        for (int i = 0; i < k; i++) {
              if (v[i] > v[i+1]) {
                   aux = v[i];
                   v[i] = v[i+1];
                   v[i+1] = aux;
              }
        }
    }
}

void concatenaVetores2(int v1[], int n1, int v2[], int n2, int v3[], int n3) {
    for (int i=0; i < n1; i++) {
        v3[i] = v1[i];
    }
    
    for (int i=0; i < n2; i++) {
        v3[n1+i] = v2[i];
    }
    
    BubbleSort(v3, n3);
}

void read(int vetor[], int n) {
  for (int i = 0; i < n; i++) {
      printf("Digite o valor: ");
      scanf("%d", &vetor[i]);
  }
}

void show(int vetor[], int s) {
  for (int i = 0; i < s; i++)
    printf("%d ", vetor[i]);
  printf("\n");
}

int main() {
  int n1, n2;
  printf("Digite o tamanho do vetor 1:\n");
  scanf("%d", &n1);
  int vetor1[n1];
  read(vetor1, n1);
  printf("Vetor digitado:\n");
  show(vetor1, n1);
  printf("Digite o tamanho do vetor 2:\n");
  scanf("%d", &n2);
  int vetor2[n2];
  read(vetor2, n2);
  printf("Vetor digitado:\n");
  show(vetor2, n2);
  int vconct[n1+n2];
  concatenaVetores2(vetor1, n1, vetor2, n2, vconct, n1+n2);
  printf("Vetor concatenado e ordenado:\n");
  show(vconct, n1 + n2);
  return 0;
}
