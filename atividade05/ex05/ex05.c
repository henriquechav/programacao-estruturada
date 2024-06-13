#include <stdio.h>

void read_vec(int *vetor, int len) {
    printf("Digite os elementos do vetor:\n");
    
    for (int i = 0; i < len; ++i) {
        scanf("%d", vetor + i);
    }
}

void soma_maiores(int *vetor, int len) {
    int counter = 0;
    
    for (int i = 0; i < len; ++i) {
        if (*(vetor + i) > 5) {
            counter++;
        }
    }
    
    printf("Existem %d elementos maiores que 5 no vetor.", counter);
}

int main() {
    int len;
    
    printf("Digite o tamanho do vetor:\n");
    scanf("%d", &len);
    
    int vetor[len];
    
    read_vec(vetor, len);
    soma_maiores(vetor, len);
    
    return 0;
}
