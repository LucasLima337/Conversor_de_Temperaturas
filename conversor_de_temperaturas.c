#include <stdio.h>
#include <stdlib.h>

int main(){
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
            printf("\n----------------------------------\n");
            printf("Temperatura Escolhida: %.2fC\n", c);
            printf("Temperatura em Kelvin: %.2f\n", k);
            printf("----------------------------------\n");
        }
    }
    return 0;
}
