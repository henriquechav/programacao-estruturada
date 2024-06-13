#include <stdio.h>

int main()
{
    int a, b;
    
    printf("Digite dois valores:\n");
    scanf("%i", &a);
    scanf("%i", &b);
    
    printf("A soma é %i\n", a + b);
    printf("O produto é %i\n", a * b);
    printf("A diferença é %i\n", a - b);
    printf("O quociente é %i\n", a / b);
    printf("O resto é %i\n", a % b);
    
    return 0;
}
