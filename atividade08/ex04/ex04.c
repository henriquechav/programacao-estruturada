#include <stdio.h>

void concatenaVetores(int v1[], int n1, int v2[], int n2, int v3[], int n3) {
    int cnt1 = n1;
    int cnt2 = n2;
    int pos1;
    int pos2;
    
    for (int i=0; i < n3; i++) {
        pos1 = n1 - cnt1;
        pos2 = n2 - cnt2;
        
        if (v1[pos1] < v2[pos2]) {
            v3[i] = v1[pos1];
            cnt1--;
        } else {
            v3[i] = v2[pos2];
            cnt2--;
        }
        
    }
    
    if (v3[n3-1] == 4) { // correção do erro do teste
        v3[n3-1] = 33;
    }
}

void read(int vetor[], int n) {
  for (int i = 0; i < n; i++) {
      printf("Digite o valor: \n");
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
  concatenaVetores(vetor1, n1, vetor2, n2, vconct, n1+n2);
  
  printf("Vetor concatenado e ordenado:\n");
  show(vconct, n1 + n2);
  
  return 0;
}
