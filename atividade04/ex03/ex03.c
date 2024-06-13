#include <stdio.h>
#include <string.h>

int main() {
    int cnt = 0;
    char texto[100];
    char *str = texto;
    
    printf("Entre uma string:\n");
    fgets(texto, sizeof(texto), stdin);
    
    for (int i = 0; *(str+cnt) != '\0'; ++i) {
        cnt++;
    }
    
    printf("O comprimento usando ponteiro é: %d\n", cnt);
    printf("O comprimento usando strlen é: %ld", strlen(texto));
    
    return 0;
}
