#include <stdio.h>
#include <stdlib.h>

struct sVetor {
    int size;
    int vetor[];
};

struct sVetor *buscaChave(int v[], int n, int chave) { // n é o tamanho do vetor v
    int contador = 0;
    
    for (int i=0; i < n; i++) {
        if (v[i] == chave) {
            contador++;
        }
    }
    
    if (contador == 0) {
        struct sVetor *sV = (struct sVetor *)malloc(sizeof(struct sVetor) + sizeof(int[1]));
        sV->size = 1;
        sV->vetor[0] = -1;
        return sV;
    }
    
    struct sVetor *sV = (struct sVetor *)malloc(sizeof(struct sVetor) + sizeof(int[contador]));
    sV->size = contador;
    
    for (int i=0; i < n; i++) {
        if (v[i] == chave) {
            sV->vetor[sV->size - contador] = i;
            contador--;
        }
    }
    
    return sV;
}

void read(int v[], int n) { // n é o tamanho do vetor v
    for (int i = 0; i < n; i++) {
        printf("Digite o valor: \n");
        scanf("%d", &v[i]);
    }
}

void show(int v[], int n) { // n é o tamanho do vetor v
    for (int i = 0; i < n; i++)
        printf("%d ", v[i]);
    printf("\n");
}

int main() {
    int n, chave;
    
    printf("Digite o tamanho do vetor: \n");
    scanf("%d", &n);
    
    int vetor[n];
    read(vetor, n);
    
    printf("Vetor digitado:\n");
    show(vetor, n);
    
    printf("Digite a chave:\n");
    scanf("%d", &chave);
    struct sVetor *sV = buscaChave(vetor, n, chave);
    
    printf("Mostra os índices da chave:\n");
    show(sV->vetor, sV->size);
    return 0;
}

