#include <stdio.h>

int main()
{
    int num, 
        TestePrimo = 0;
    
    printf("Digite um número inteiro:\n");
    scanf("%i", &num);
    
    for (int i=1; i<num+1; i++) {
        if (num % i == 0) {
            printf("O número %i é divisível por %i.\n", num, i);
            TestePrimo++;
        }
    }
  
    if (TestePrimo == 2) {
        printf("O número %i é primo.", num);
    }
  
    return 0;
}
