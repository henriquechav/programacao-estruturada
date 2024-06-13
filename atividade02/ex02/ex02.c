#include <stdio.h>

int main(void)
{
    int i;
    
    printf("Digite um número inteiro:\n");
    scanf("%i", &i);
    
    if (i % 2 == 0) {
        printf("O número é par.");
    } else {
        printf("O número é ímpar.");
    }
    
    return 0;
}
