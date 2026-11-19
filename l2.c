#include <stdio.h>

typedef struct { char nome[30]; float n1, n2, n3; } Aluno;

int main(){
    Aluno turma[3];
    double media[3];
    double melhor_media = 0;
    
    for(int i = 0; i < 3; i++){
        printf("Digite o nome do aluno: \n");
        scanf(" %29[^\n]", turma[i].nome);
        
        printf("Digite a 1° nota: \n");
        scanf("%f", &turma[i].n1);

        printf("Digite a 2° nota: \n");
        scanf("%f", &turma[i].n2);

        printf("Digite a 3° nota: \n");
        scanf("%f", &turma[i].n3);

    }
    for(int j = 0; j < 3; j++){
        media[j] = (turma[j].n1 +  turma[j].n2 + turma[j].n3) / 3;
        if (media[j] > melhor_media){
            melhor_media = media[j];
        }
    }
    printf("A melhor media foi %.2lf\n", melhor_media);

    return 0;
}