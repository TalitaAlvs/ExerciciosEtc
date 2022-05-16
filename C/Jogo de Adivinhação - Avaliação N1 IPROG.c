#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    /*A PONTUAÇÃO É FEITA DA SEGUINTE FORMA: A cada tentativa sem sucesso o jogador
    perde determinado número de pontos. Em todos os níveis o jogo começa com 100 pontos,
    no nível 1 esse número vai diminuindo de 5 em 5 pontos, no nível 2 diminui de 10 em 10,
    no nível 3 de 20 em 20 pontos.*/
    int op, n, t, sort, pontos;
        printf("************************\n");
        printf("| JOGO DE ADIVINHAÇÃO! |\n");
        printf("************************\n");
        printf("\nEscolha um dos níveis a baixo");
        printf("\n1 - Fácil");
        printf("\n2 - Intermediário");
        printf("\n3 - Difícil\n\n");
        printf("* * * * * *");
        printf("\n>>> ");
        scanf("%d", &op);
        printf("\n* * * * * *\n");
        switch (op){
            case 1:
                srand(time(NULL));
                sort = rand()%100;
                printf(" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
                printf("\n| Você terá 20 chances para adivinhar o número secreto |");
                printf("\n|               entre 1 e 100                          |");
                printf("\n|            Pontuação inicial: 100                    |\n");
                printf(" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                do{
                    t=1;
                    while(t<21){
                        printf("\nTentativa %d: ", t);
                        scanf("%d", &n);
                        int pontos = 100 - (5 * t);
                        t++;
                        if(n > sort){
                            printf("\nO numero sorteado é menor que %d", n);
                            printf("\nPONTUAÇÃO ATUAL: %d\n", pontos);
                            printf("-----------------------\n");
                        }else if(n < sort){
                            printf("\nO numero sorteado é maior que %d", n);
                            printf("\nPONTUAÇÃO ATUAL: %d\n\n", pontos);
                            printf("-----------------------\n");
                        }else if(n = sort){
                            printf("\nParabéns! Você acertou o numero em %d tentativas!", (t-1));
                            printf("\nPONTUAÇÃO FINAL: %d\n\n", pontos);
                            printf("-----------------------\n");
                            break;
                        }
                    }
                }while(n != sort && t < 21);
                    printf("\nQue peninha, você perdeu!");
                break;
            case 2:
                srand(time(NULL));
                sort = rand()%100;
                printf(" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
                printf("\n| Você terá 10 chances para adivinhar o número secreto |");
                printf("\n|               entre 1 e 100                          |");
                printf("\n|            Pontuação inicial: 100                    |\n");
                printf(" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                do{
                    t=1;
                    while(t<11){
                        printf("\nTentativa %d: ", t);
                        scanf("%d", &n);
                        int pontos = 100 - (10 * t);
                        t++;
                        if(n > sort){
                            printf("\nO numero sorteado é menor que %d", n);
                            printf("\nPONTUAÇÃO ATUAL: %d\n", (pontos-10));
                            printf("-----------------------\n");
                        }else if(n < sort){
                            printf("\nO numero sorteado é maior que %d", n);
                            printf("\nPONTUAÇÃO ATUAL: %d\n\n", (pontos-10));
                            printf("-----------------------\n");
                        }else if(n = sort){
                            printf("\nParabéns! Você acertou o numero em %d tentativas!", (t-1));
                            printf("\nPONTUAÇÃO FINAL: %d\n\n", (pontos-10));
                            printf("-----------------------\n");
                            break;
                        }
                    }
                }while(n != sort && t < 11);
                    printf("\nQue peninha, você perdeu!");
                break;
            case 3:
                srand(time(NULL));
                sort = rand()%100;
                printf(" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
                printf("\n| Você terá 05 chances para adivinhar o número secreto |");
                printf("\n|               entre 1 e 100                          |");
                printf("\n|            Pontuação inicial: 100                    |\n");
                printf(" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                do{
                    t=1;
                    while(t<6){
                        printf("\nTentativa %d: ", t);
                        scanf("%d", &n);
                        int pontos = 100 - (20 * t);
                        t++;
                        if(n > sort){
                            printf("\nO numero sorteado é menor que %d", n);
                            printf("\nPONTUAÇÃO ATUAL: %d\n", pontos);
                            printf("-----------------------\n");
                        }else if(n < sort){
                            printf("\nO numero sorteado é maior que %d", n);
                            printf("\nPONTUAÇÃO ATUAL: %d\n\n", pontos);
                            printf("-----------------------\n");
                        }else if(n = sort){
                            printf("\nParabéns! Você acertou o numero em %d tentativas!", (t-1));
                            printf("\nPONTUAÇÃO FINAL: %d\n\n", pontos);
                            printf("-----------------------\n");
                            break;
                        }
                    }
                }while(n != sort && t < 6);
                    printf("\nQue peninha, você perdeu!");
                break;
            default:
                printf ("\nOpção inválida. Digite 1, 2 ou 3.");
                break;
        }
    return 0;
}




