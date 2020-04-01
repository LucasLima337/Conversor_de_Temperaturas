#include <stdio.h>
#include <stdlib.h>

int main(){
    int e = 1;
    while(e == 1){
        int e1, e2;
        float c, k, f;
        printf("\nEscolha uma das temperaturas digitando o numero correspondente:\n");
        printf("[1] Celsius\n");
        printf("[2] Kelvin\n");
        printf("[3] Fahrenheit\n");
        printf("Sua escolha: ");
        scanf("%d", &e1);
        if(e1 == 1){
            printf("\nAgora escolha para qual temperatura deseja converter:\n");
            printf("[1] Kelvin\n");
            printf("[2] Fahrenheit\n");
            printf("Sua escolha: ");
            scanf("%d", &e2);
            if(e2 == 1){
                printf("\nAgora digite uma temperatura em Celsius: ");
                scanf("%f", &c);
                k = c + 273;
                printf("\n-------------------------------------\n");
                printf("Temperatura Escolhida: %.2f C\n", c);
                printf("Temperatura em Kelvin: %.2f K\n", k);
                printf("-------------------------------------\n");
            }
            else{
                printf("\nAgora digite uma temperatura em Celsius: ");
                scanf("%f", &c);
                f = 1.8 * c + 32;
                printf("\n-------------------------------------\n");
                printf("Temperatura Escolhida: %.2f C\n", c);
                printf("Temperatura em Fahrenheit: %.2f F\n", f);
                printf("-------------------------------------\n");
            }
        }
        else{
            if(e1 == 2){
                printf("\nAgora escolha para qual temperatura deseja converter:\n");
                printf("[1] Celsius\n");
                printf("[2] Fahrenheit\n");
                printf("Sua escolha: ");
                scanf("%d", &e2);
                if(e2 == 1){
                    printf("\nAgora digite uma temperatura em Kelvin: ");
                    scanf("%f", &k);
                    c = k - 273;
                    printf("\n-------------------------------------\n");
                    printf("Temperatura Escolhida: %.2f K\n", k);
                    printf("Temperatura em Celsius: %.2f C\n", c);
                    printf("-------------------------------------\n");
                }
                else{
                    printf("\nAgora digite uma temperatura em Kelvin: ");
                    scanf("%f", &k);
                    f = (k - 273) * 9 / 5 + 32;
                    printf("\n-------------------------------------\n");
                    printf("Temperatura Escolhida: %.2f K\n", k);
                    printf("Temperatura em Fahrenheit: %.2f F\n", f);
                    printf("-------------------------------------\n");
                }
            }
            else{
                if(e1 == 3){
                    printf("\nAgora escolha para qual temperatura deseja converter:\n");
                    printf("[1] Celsius\n");
                    printf("[2] Kelvin\n");
                    printf("Sua escolha: ");
                    scanf("%d", &e2);
                    if(e2 == 1){
                        printf("\nAgora digite um temperatura em Fahrenheit: ");
                        scanf("%f", &f);
                        c = (f - 32) * 5 / 9;
                        printf("\n-------------------------------------\n");
                        printf("Temperatura Escolhida: %.2f F\n", f);
                        printf("Temperatura em Celsius: %.2f C\n", c);
                        printf("-------------------------------------\n");
                    }
                    else{
                        printf("\nAgora digite uma temperatura em Fahrenheit: ");
                        scanf("%f", &f);
                        k = (f - 32) * 5 / 9 + 273;
                        printf("\n-------------------------------------\n");
                        printf("Temperatura Escolhida: %.2f F\n", f);
                        printf("Temperatura em Kelvin: %.2f K\n", k);
                        printf("-------------------------------------\n");
                    }
                }
            }
        }
        printf("\nDeseja continuar fazendo conversoes?\n");
        printf("[1] SIM\n");
        printf("[2] NAO\n");
        printf("Sua escolha: ");
        scanf("%d", &e);
        printf("\n-----------------------------------------------------------------------------------\n");
    }
    if(e == 2){
        printf("\nPrograma finalizado com sucesso!\n\n");
        system("pause");
    }
    return 0;
}   
