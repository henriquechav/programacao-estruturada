#include <stdio.h>

int main() {
    int vlen;
    
    printf("Digite o número de elementos do vetor:\n");
    scanf("%i", &vlen);
    
    int v[vlen];
    int *p;
    p = v;
    
    printf("Digite os elementos do vetor:\n");
    
    for (int i=0; i<vlen; i++) {
        scanf("%i", p+i);
    }
    
    for (int i=0; i<vlen; i++) {
        printf("O elemento na posição %i é %i.\n", i, *(p+i));
    }
    
    return 0;
}
