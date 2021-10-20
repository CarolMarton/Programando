//ATIVIDADE 1
//Faça uma solução para computar a nota de 10 alunos.
//Ao término, mostrar as notas cujo valor tenha sido
//superior à média de notas da turma.
#include <stdio.h>

    int main(){
        float notas[10],soma=0.0, media;
        int i=0;

        for (i=0; i<10; i++) {
            printf("\n Digite a nota do aluno %d: ",i);
            scanf("%f",&notas[i]);
            soma+=notas[i];
        }

        media = soma/10;
        printf("\n Media das notas: %.2f \n", media);

        for (i=0; i<10; i++) {
            if (notas[i] >= media)
                printf("\nAluno %d tem nota %.2f, essa nota eh maior que a media \n", i, notas[i]);
        }

    return 0;
    }
