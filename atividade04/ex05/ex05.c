#include <stdio.h>

int main() {
    char *nomes[5] = {"Ana", "Bia", "Clara", "Diana", "Elisa"};
    
    for (int i = 0; i < 5; i++) {
        printf("O nome na posição %d é %s.\n", i, nomes[i]);
    }
    
    return 0;
}
