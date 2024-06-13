#include <stdio.h>

struct turma {
    char nome[50];
    int frequencia;
    int nota;
};

int main() {
    int qntAlunos;
    int qntAprovados = 0;
    int qntReprovados = 0;
    int soma = 0;
    float media;
    
    scanf("%d", &qntAlunos);
    
    struct turma alunos[qntAlunos];
    
    for (int i = 0; i < qntAlunos; ++i) {
        scanf("%s", alunos[i].nome);
        scanf("%d", &alunos[i].frequencia);
        scanf("%d", &alunos[i].nota);
    
        soma = soma + alunos[i].nota;
        
        if (alunos[i].nota > 5) {
            qntAprovados++;
        }
        
        if (alunos[i].frequencia < 75) {
            qntReprovados++;
        }
    }
    
    media = soma / qntAlunos;
    
    printf("%d\n", qntAprovados);
    printf("%d\n", qntReprovados);
    printf("%.2f", media);
    
    return 0;
}
