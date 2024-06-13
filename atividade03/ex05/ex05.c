#include <stdio.h>
#include <string.h>

int main(){
    char str[30];
    char vogais[] = "aeiou";
    int qntVogais = 0;
    
    printf("Digite a string:\n");
    fgets(str, sizeof str, stdin);
    
    for (int i=0; i<strlen(str); i++) {
        for (int j=0; j<strlen(vogais); j++) {
            if (str[i] == vogais[j]) {
                qntVogais++;
            }
        }
    }
    
    printf("Número de vogais: %i", qntVogais);
    
    return 0;
}
