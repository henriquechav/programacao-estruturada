#include <stdio.h>

int decideSePrimo(int num, int div) {
    if (div == 1) {
        return 1;
    } 
    
    if (num % div == 0) {
        return 0;
    } 
    
    return decideSePrimo(num, div-1);
}

int main() {
    int numero;
    
    printf("Digite um valor inteiro:\n");
    scanf("%i\n", &numero);
    
    if (decideSePrimo(numero, numero-1)) {
        printf("O número %i é primo.", numero);
    } else {
        printf("O número %i não é primo.", numero);
    }
    
    return 0;
}
