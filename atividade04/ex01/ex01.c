#include <stdio.h>

int main() {
    int x, y, r;
    int *px, *py, *pr;
    
    px = &x;
    py = &y;
    pr = &r;
    
    printf("Digite dois valores inteiros:\n");
    scanf("%i", &x);
    scanf("%i", &y);
    
    *pr = *px + *py;
    printf("A soma é: %i\n", r);
    
    *pr = *px - *py;
    printf("A subtração é: %i\n", r);
    
    *pr = *px * *py;
    printf("A multiplicação é: %i\n", r);
    
    *pr = *px / *py;
    printf("A divisão é: %i\n", r);
    
    *pr = *px % *py;
    printf("O resto é: %i\n", r);
    
    return 0;
}
