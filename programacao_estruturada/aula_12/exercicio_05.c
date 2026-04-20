#include <stdio.h>
#include <stdlib.h>

struct aluno
{
    char *nome;
    char *matricula;
    float p1;
    float p2;
    float p3;
};
typedef struct aluno Aluno;

void le_turma(Aluno *turma, int n)
{
    for (int i = 0; i < n; i++)
    {
        turma[i].nome = (char *)malloc(20 * sizeof(char));
        turma[i].matricula = (char *)malloc(8 * sizeof(char));
        printf("Nome do aluno %d: ", i + 1);
        scanf("%s", turma[i].nome);

        printf("Matrícula do aluno %d: ", i + 1);
        scanf(" %s", turma[i].matricula);

        printf("Notas do aluno %d: ", i + 1);
        scanf("%f %f %f", &turma[i].p1, &turma[i].p2, &turma[i].p3);
    }
}

void imprime_aprovados(Aluno *turma, int n)
{
    printf("Aprovados: \n");
    for (int i = 0; i < n; i++)
    {
        float soma = turma[i].p1 + turma[i].p2 + turma[i].p3;
        float media = soma / 3.0;
        if (media >= 6)
        {
            printf("------------------------\n");
            printf("Aluno: %s\n", turma[i].nome);
            printf("Matrícula: %s\n", turma[i].matricula);
            printf("Media: %.2f\n", media);
        }
    }
}
int main(void)
{
    int n;

    printf("Numero de alunos: ");
    scanf("%d", &n);

    Aluno *turma;
    turma = (Aluno *)malloc(n * sizeof(Aluno));

    le_turma(turma, n);

    imprime_aprovados(turma, n);
    return 0;
}