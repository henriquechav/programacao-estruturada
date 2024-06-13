#include <stdio.h>
#include <ctype.h>

int buscaCaractere(char string[], char c) {
    c = tolower(c);
    
    for (int i=0; i < 60; ++i) {
        if (tolower(string[i]) == c) {
            return i;
        }
    }
    
    return -1;
}

int main() {
    char string[60], character;
    
    printf("String: \n");
    fgets(string, 60, stdin);
    
    printf("Caractere: \n");
    scanf("%c",&character);
    
    int pos = buscaCaractere(string,character);
    
    printf("Posição: %d.\n",pos);
    
    return 0;
}
