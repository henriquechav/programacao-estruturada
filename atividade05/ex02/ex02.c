#include <stdio.h>

void read_vec(int *vetor, int n) {
    int num;
    
    printf("Digite os elementos do vetor:\n");
    
    for(int i = 0; i < n; ++i) {
        scanf("%d", &num);
        *(vetor + i) = num;
    }
    
}

void show_vec(int *vetor, int n) {
    printf("O vetor é:\n");

    for(int i = 0; i < n; ++i) {
        printf("%d ", *(vetor + i));
    }
}

void square_vec(int *vetor, int n) {
    for (int i = 0; i < n; ++i) {
        *(vetor + i) = *(vetor + i) * *(vetor + i);
    }
}

int main() {
    int len;
    
    printf("Digite o tamanho do vetor:\n");
    scanf("%d", &len);
    
    int vetor[len];
    
    read_vec(vetor, len);
    show_vec(vetor, len);
    square_vec(vetor, len);
    show_vec(vetor, len);
    
    return 0;
}
