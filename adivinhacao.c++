#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){

    //comando de regionalização
    setlocale(LC_ALL,"Portuguese_Brazil");

    //exibição do texto
    printf("*************************\n");
    printf("* Bem vindo ao meu jogo *\n");
    printf("*************************\n");
    printf("Adivinhe um número de 0-50.\n");

    int numerosecreto = 24;

    int chute;

    // contador de chances.
    for(int i=1; i<=3; i++){

        printf("tentativa %d de 3\n", i);
        printf("Qual é o seu chute?");

        scanf("%d",&chute);
        printf("Seu chute foi %d\n", chute);

        int acertou=(chute==numerosecreto);

        if(acertou){
            printf("Parabéns! Você acertou!\n");
            printf("Jogue de novo, você é um bom jogador!\n");

            break;
        }
        else{

            int maior=chute>numerosecreto;
            if(maior){
            printf("Sua resposta é maior que o número secreto.\n");
            } else{
            printf("Sua resposta é menor que o número secreto.\n");
            }

        }

    }
    printf("*** FIM DE JOGO ***\n");


}



