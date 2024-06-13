#include <stdio.h>

union value {
    int resultado;
    int divisao[2];
};

int main() {
    union value value;
    int oper;
    int x; 
    int y; 
    
    printf("Digite os operandos x e y\n");
    scanf("%d", &x);
    scanf("%d", &y);
    
    printf("Digite a operação: 1 - Adição, 2 - Subtração, 3 - Multiplicação, 4 - Divisão\n");
    scanf("%d", &oper);
    
    switch (oper) {
        case 1:
        value.resultado = x + y;
        printf("Resultado: %d", value.resultado);
        break;
        
        case 2:
        value.resultado = x - y;
        printf("Resultado: %d", value.resultado);
        break;
        
        case 3:
        value.resultado = x * y;
        printf("Resultado: %d", value.resultado);
        break;
        
        case 4:
        if (y == 0) {
            printf("Erro");
        } else {
            value.divisao[0] = x / y;
            value.divisao[1] = x % y;
            printf("Resultado: quociente %d, resto %d)", value.divisao[0], value.divisao[1]);
        }
        break;
    }
    
    return 0;
}
