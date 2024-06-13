#include <stdio.h>

void write_str(char *str) {
    printf("A string é:\n");
    
    for (int i = 0; *(str + i) != '\0'; ++i) {
        printf("%c\n", *(str + i));
    }
}

int main() {
    char str[50];
    
    printf("Digite uma string:\n");
    fgets(str, sizeof(str), stdin);

    write_str(str);
    
    return 0;
}
