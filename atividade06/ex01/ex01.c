#include <stdio.h>

struct user {
    char nome[20];
    int idade;
    float altura;
    float peso;
};

void showStruct(struct user pessoa) {
    printf("O nome é: %s\n", pessoa.nome);
    printf("A idade é: %d\n", pessoa.idade);
    printf("A altura é: %.2f\n", pessoa.altura);
    printf("O peso é: %.2f\n", pessoa.peso);
}

int main() {
    struct user pessoa01 = {
        .nome = "João Silva",
        .idade = 30,
        .altura = 1.65,
        .peso = 75.50
    };
    
    struct user pessoa02;
    
    printf("Digite o nome:\n");
    fgets(pessoa02.nome, sizeof(pessoa02.nome), stdin);
    
    printf("Digite a idade:\n");
    scanf("%d", &pessoa02.idade);
    
    printf("Digite a altura:\n");
    scanf("%f", &pessoa02.altura);
    
    printf("Digite o peso:\n");
    scanf("%f", &pessoa02.peso);
    
    showStruct(pessoa01);
    showStruct(pessoa02);
    
    return 0;
}
