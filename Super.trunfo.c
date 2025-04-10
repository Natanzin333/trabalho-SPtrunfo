#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Variáveis
struct CartaTrunfo {
    char estado[30];
    char codigo[20];
    char cidade[50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontos;
    float densidade;
    float pibpercapita;
    long double superpoder;
    float densidadeinversa;
    
    
    
    

};

int main() {
    struct CartaTrunfo carta1, carta2;
    int opcao;

    // Primeira carta

    printf("===Carta 1===\n");
    printf("Digite os dados da primeira carta");
    printf("===\n");

    printf("Digite o estado da carta 1: \n");
    scanf("%s", carta1.estado);

    printf("Digite o código da carta 1: \n");
    scanf("%s", carta1.codigo);

    printf("Digite a cidade da carta 1: \n");
    scanf("%s", carta1.cidade);

    printf("Digite a população da carta 1: \n");
    scanf("%lu", &carta1.populacao);


    printf("Digite a área em km² da carta 1: \n");
    scanf("%f", &carta1.area);


    printf("Digite o PIB da carta 1: \n");
    scanf("%f", &carta1.pib);
    fflush(stdin);


    printf("Digite os pontos turísticos da carta 1: \n");
    scanf("%d", &carta1.pontos);
    fflush(stdin);


    printf("\n=== Cartas Digitadas ===\n");

    // Exibindo os dados da primeira carta
    printf("=== Carta 1 ===\n");
    printf("Estado: %s - Código: %s\n", carta1.estado, carta1.codigo);
    printf("Cidade: %s - População: %lu\n", carta1.cidade, carta1.populacao);
    printf("Área em km²: %.2f - PIB: %.2f bilhões\n", carta1.area, carta1.pib);
    printf("Pontos turísticos: %d\n", carta1.pontos);



    carta1.pibpercapita = (carta1.pib * 1.0e9) / carta1.populacao;
    printf("PIB per Capita: %.2f reais\n", carta1.pibpercapita);
    
    carta1.densidade = carta1.populacao / carta1.area;
    printf("Densidade Populacional: %.2f hab/km²\n", carta1.densidade);
    
    //calculo carta 1
    carta1.densidadeinversa = 1.0 / carta1.densidade;

    carta1.superpoder = (double)carta1.populacao + (double)carta1.area + (double)(carta1.pib * 1.0e9) + (double)carta1.pontos + (double)carta1.pibpercapita + carta1.densidadeinversa;


    printf("Densidade Iversa: %f\n", carta1.densidadeinversa);
    printf("Super Poder: %.2Lf\n", carta1.superpoder);

    // Segunda carta

    printf("===Carta 2===");
    printf("Digite os dados da segunda carta\n");
    printf("===\n");

    printf("Digite o estado da carta 2: \n");
    scanf("%s", carta2.estado);

    printf("Digite o código da carta 2: \n");
    scanf("%s", carta2.codigo);

    printf("Digite a cidade da carta 2: \n");
    scanf("%s", carta2.cidade);

    printf("Digite a população da carta 2: \n");
    scanf("%lu", &carta2.populacao);

    printf("Digite a área em km² da carta 2: \n");
    scanf("%f", &carta2.area);

    printf("Digite o PIB da carta 2: \n");
    scanf("%f", &carta2.pib);

    printf("Digite os pontos turísticos da carta 2: \n");
    scanf("%d", &carta2.pontos);


    // Exibindo os dados da segunda carta
    printf("=== Carta 2 ===\n");
    printf("Estado: %s - Código: %s\n", carta2.estado, carta2.codigo);
    printf("Cidade: %s - População: %lu\n", carta2.cidade, carta2.populacao);
    printf("Área em km²: %.2f - PIB: %.2f bilhões\n", carta2.area, carta2.pib);
    printf("Pontos turísticos: %d\n", carta2.pontos);

    carta2.pibpercapita = (carta2.pib * 1.0e9) / (float)carta2.populacao;
    printf("PIB per Capita: %.2f reais\n", carta2.pibpercapita);
    
    carta2.densidade = (float)carta2.populacao / carta2.area;
    printf("Densidade Populacional: %.2f hab/km²\n", carta2.densidade);

    //calculo carta 2
    carta2.densidadeinversa = 1.0 / carta2.densidade;

    carta2.superpoder = (double)carta2.populacao + (double)carta2.area + (double)(carta2.pib * 1.0e9) + (double)carta2.pontos + (double)carta2.pibpercapita + carta2.densidadeinversa;

    printf("Densidade Iversa: %f\n", carta2.densidadeinversa);
    printf("Super Poder: %.2Lf\n", carta2.superpoder);

    //Menu interativo

    printf("\n=== MENU DE COMPARAÇÃO ===\n");
    printf("Escolha um atributo para comparar:\n");
    printf("1. Nome das cidades\n");
    printf("2. População\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Pontos Turísticos\n");
    printf("6. Densidade Populacional\n");
    printf("7. PIB per Capita\n");
    printf("8. Densidade Inversa\n");
    printf("9. Super Poder\n");
    printf("0. Sair\n");
    printf("=======================\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    //comparações

    switch (opcao) {
        case 1:
            printf("Duelo entre cidades: %s X %s\n", carta1.cidade, carta2.cidade);
            break;
           
            case 2:
            printf("População: %lu X %lu\n", carta1.populacao, carta2.populacao);
        
            if (carta1.populacao > carta2.populacao) {
                printf("A carta 1 (%s) venceu!\n", carta1.cidade);
            } 
            else if (carta2.populacao > carta1.populacao) {
                printf("A carta 2 (%s) venceu!\n", carta2.cidade);
            }
             else {
                printf("Temos um EMPATE!\n");
            }
        
            break;
        case 3:
            printf("Área: %.2f km² X %.2f km²\n", carta1.area, carta2.area);
            
            if (carta1.area > carta2.area) {
                printf("A carta 1 (%s) venceu!\n", carta1.cidade);
            } 
            else if (carta2.populacao > carta1.populacao) {
                printf("A carta 2 (%s) venceu!\n", carta2.cidade);
            }
             else {
                printf("Temos um EMPATE!\n");
            }
            
            
            break;   
        case 4:
            printf("PIB: %.2f bilhões X %.2f bilhões\n", carta1.pib, carta2.pib);

            if (carta1.pib > carta2.pib) {
                printf("A carta 1 (%s) venceu!\n", carta1.cidade);
            } 
            else if (carta2.pib > carta1.pib) {
                printf("A carta 2 (%s) venceu!\n", carta2.cidade);
            }
             else {
                printf("Temos um EMPATE!\n");
            }
            break;
        case 5:
            printf("Pontos Turísticos: %d X %d\n", carta1.pontos, carta2.pontos);

            if (carta1.pontos > carta2.pontos) {
                printf("A carta 1 (%s) venceu!\n", carta1.cidade);
            } 
            else if (carta2.pontos > carta1.pontos) {
                printf("A carta 2 (%s) venceu!\n", carta2.cidade);
            }
             else {
                printf("Temos um EMPATE!\n");
            }
            break;
        case 6:
            printf("Densidade Populacional: %.2f hab/km² X %.2f hab/km²\n", carta1.densidade, carta2.densidade);

            if (carta1.densidade > carta2.densidade) {
                printf("A carta 1 (%s) venceu!\n", carta1.cidade);
            } 
            else if (carta2.densidade > carta1.densidade) {
                printf("A carta 2 (%s) venceu!\n", carta2.cidade);
            }
             else {
                printf("Temos um EMPATE!\n");
            }
            break;
        case 7:
            printf("PIB per Capita: R$%.2f X R$%.2f\n", carta1.pibpercapita, carta2.pibpercapita);

            if (carta1.pibpercapita > carta2.pibpercapita) {
                printf("A carta 1 (%s) venceu!\n", carta1.cidade);
            } 
            else if (carta2.pibpercapita > carta1.pibpercapita) {
                printf("A carta 2 (%s) venceu!\n", carta2.cidade);
            }
             else {
                printf("Temos um EMPATE!\n");
            }
            break;
        case 8:
            printf("Densidade Inversa: %.6f X %.6f\n", carta1.densidadeinversa, carta2.densidadeinversa);

            if (carta1.densidadeinversa < carta2.densidadeinversa) {
                printf("A carta 1 (%s) venceu!\n", carta1.cidade);
            } 
            else if (carta2.densidadeinversa < carta1.densidadeinversa) {
                printf("A carta 2 (%s) venceu!\n", carta2.cidade);
            }
             else {
                printf("Temos um EMPATE!\n");
            }
            break;
        case 9:
            printf("Super Poder: %.2Lf X %.2Lf\n", carta1.superpoder, carta2.superpoder);

            if (carta1.superpoder > carta2.superpoder) {
                printf("A carta 1 (%s) venceu!\n", carta1.cidade);
            } 
            else if (carta2.superpoder> carta1.superpoder) {
                printf("A carta 2 (%s) venceu!\n", carta2.cidade);
            }
             else {
                printf("Temos um EMPATE!\n");
            }
            break;
        case 0:
            printf("Saindo do jogo...\n");
            break;
        default:
            printf("Opção inválida! Tente novamente.\n");
    }


    

    

    




    return 0;

}