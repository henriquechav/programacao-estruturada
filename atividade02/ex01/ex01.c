#include <stdio.h>

int main(void)
{
    int nota;
    
    printf("Digite sua nota:\n");
    scanf("%i", &nota);
    
    if (nota < 5) {
        printf("Conceito F - reprovado");
        return 0;
    }
    if (nota < 6) {
        printf("Conceito D - desempenho mínimo");
        return 0;
    }
    if (nota < 7) {
        printf("Conceito C - desempenho adequado");
        return 0;
    }
    if (nota < 8.5) {
        printf("Conceito B - bom desempenho");
        return 0;
    } else {
        printf("Conceito A - desempenho excepcional");
        return 0;
    }
}
