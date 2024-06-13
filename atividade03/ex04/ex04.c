#include <stdio.h>
#include <string.h>

int main() {
    char str1[8], str2[8], str3[8];
    
    printf("Digite a string 1:\n");
    scanf("%s", str1);
    printf("Digite a string 2:\n");
    scanf("%s", str2);
    
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    printf("strcpy(str3,str1): %s\n", strcpy(str3, str1));
    printf("strcat(str1,str2): %s\n", strcat(str1, str2));
    printf("strlen(str1): %li", strlen(str1));
    
    return 0;
}
