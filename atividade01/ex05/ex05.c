#include <stdio.h>

int main()
{
    float x, y;
    
    printf("Digite o valor de x:\n");
    scanf("%f", &x);
    
    y = x*x - 2*x + 3;
    
    printf("O valor de y é: %.2f", y);
    
    return 0;
}
