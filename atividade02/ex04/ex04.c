#include <stdio.h>

int main() {
    int num, i, fatorial;
    fatorial = 1;
    i = 1;
    
    printf("Digite um número inteiro:\n");
    scanf("%i", &num);
    
    
    while (i <= num) {
        fatorial *= i;
        i++;
    }
    
    printf("%i! = %i", num, fatorial);
    
    return 0;
}
