#include <stdio.h>

int main() {
    int lista[10];
    int *vetor = lista;
    int num;

    num = (vetor+10) - (vetor+0);
    
    printf("O número de elementos usando ponteiros é %d\n", num);
    printf("O número de elementos usando sizeof é %ld", sizeof(lista)/sizeof(*lista));
    
    return 0;
}
