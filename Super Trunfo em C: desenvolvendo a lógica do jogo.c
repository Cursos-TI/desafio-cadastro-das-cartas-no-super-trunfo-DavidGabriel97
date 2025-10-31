#include <stdio.h>

int main() {

    ///////// CARTA 1 /////////
    char Cidade[40] = "Brasil (BR)";
    int Populacao = 14850513;
    float Area = 567.245;
    float PIB = 138.5;
    int Numero = 17;

    // Cálculos
    float DP = (float)(Populacao / Area);   // Densidade Demográfica
    float PPC = (float)(Populacao / PIB);   // PIB per Capita
    float CPC = (DP + PPC);
    float InDen = 1.0 / DP;
    float Superpoder = Populacao + Area + PIB + Numero + PPC + InDen;

    ///////// CARTA 2 /////////
    char Cidade2[40] = "Argentina (AR)";
    int Populacao2 = 75880413;
    float Area2 = 561.295;
    float PIB2 = 138.5;
    int Numero2 = 13;

    // Cálculos 
    float DP2 = (float)(Populacao2 / Area2);
    float PPC2 = (float)(Populacao2 / PIB2);
    float CPC2 = (DP2 + PPC2);
    float InDen2 = 1.0 / DP2;
    float Superpoder2 = Populacao2 + Area2 + PIB2 + Numero2 + PPC2 + InDen2;

    int opcao1, opcao2;

    /////////// EXIBIÇÃO DAS CARTAS ///////////
    printf("\n-------------------- CARTA 1 -----------------------\n");
    printf("Nome da Cidade: %s\n", Cidade);
    printf("População: %d\n", Populacao);
    printf("Área: %.2f km²\n", Area);
    printf("PIB: %.2f bilhões de reais\n", PIB);
    printf("Número de Pontos Turísticos: %d\n", Numero);
    printf("Densidade Populacional: %.2f hab/km²\n", DP);
    printf("PIB per Capita: %.2f Reais\n", PPC);
    printf("Super Poder: %.2f\n", Superpoder);

    printf("\n-------------------- CARTA 2 -----------------------\n");
    printf("Nome da Cidade: %s\n", Cidade2);
    printf("População: %d\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", Numero2);
    printf("Densidade Populacional: %.2f hab/km²\n", DP2);
    printf("PIB per Capita: %.2f Reais\n", PPC2);
    printf("Super Poder: %.2f\n", Superpoder2);

    //////// ESCOLHA DE ATRIBUTOS ////////
    printf("\n=================== MENU DE ATRIBUTOS ===================\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Populacional (menor vence)\n");
    printf("=========================================================\n");

    // Escolha do primeiro atributo
    printf("Escolha o primeiro atributo para comparar: ");
    scanf("%d", &opcao1);

    {
        printf("\nAgora escolha o segundo atributo (diferente do primeiro):\n");

        switch (opcao1) {
            case 1: printf("2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Populacional\n"); break;
            case 2: printf("1 - População\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Populacional\n"); break;
            case 3: printf("1 - População\n2 - Área\n4 - Pontos Turísticos\n5 - Densidade Populacional\n"); break;
            case 4: printf("1 - População\n2 - Área\n3 - PIB\n5 - Densidade Populacional\n"); break;
            case 5: printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n"); break;
            default: printf("Opção inválida!\n"); break;
        }

        printf("Escolha: ");
        scanf("%d", &opcao2);

        if (opcao2 == opcao1)
            printf("Você já escolheu esse atributo! Escolha outro.\n");

    } while (opcao2 == opcao1);

    //////// COMPARAÇÃO ////////
    float valor1_c1, valor1_c2, valor2_c1, valor2_c2;
    int resultado1, resultado2;

    // valor dos atributos
    switch (opcao1) {
        case 1: valor1_c1 = Populacao; valor1_c2 = Populacao2; break;
        case 2: valor1_c1 = Area; valor1_c2 = Area2; break;
        case 3: valor1_c1 = PIB; valor1_c2 = PIB2; break;
        case 4: valor1_c1 = Numero; valor1_c2 = Numero2; break;
        case 5: valor1_c1 = DP; valor1_c2 = DP2; break;
        default: valor1_c1 = valor1_c2 = 0; break;
    }

    switch (opcao2) {
        case 1: valor2_c1 = Populacao; valor2_c2 = Populacao2; break;
        case 2: valor2_c1 = Area; valor2_c2 = Area2; break;
        case 3: valor2_c1 = PIB; valor2_c2 = PIB2; break;
        case 4: valor2_c1 = Numero; valor2_c2 = Numero2; break;
        case 5: valor2_c1 = DP; valor2_c2 = DP2; break;
        default: valor2_c1 = valor2_c2 = 0; break;
    }

    // Comparação do primeiro atributo
    if (opcao1 == 5) // densidade — menor vence
        resultado1 = (valor1_c1 < valor1_c2) ? 1 : (valor1_c1 > valor1_c2 ? 2 : 0);
    else
        resultado1 = (valor1_c1 > valor1_c2) ? 1 : (valor1_c1 < valor1_c2 ? 2 : 0);

    // Comparação do segundo atributo
    if (opcao2 == 5)
        resultado2 = (valor2_c1 < valor2_c2) ? 1 : (valor2_c1 > valor2_c2 ? 2 : 0);
    else
        resultado2 = (valor2_c1 > valor2_c2) ? 1 : (valor2_c1 < valor2_c2 ? 2 : 0);

    // Soma dos atributos
    float soma1 = valor1_c1 + valor2_c1;
    float soma2 = valor1_c2 + valor2_c2;

    //////// RESULTADOS ////////
    printf("\n=================== RESULTADOS ===================\n");
    printf("Comparando: %s x %s\n", Cidade, Cidade2);
    printf("-----------------------------------------------\n");
    printf("Atributo 1: %.2f x %.2f → %s\n",
           valor1_c1, valor1_c2,
           (resultado1 == 1) ? Cidade : (resultado1 == 2 ? Cidade2 : "Empate"));

    printf("Atributo 2: %.2f x %.2f → %s\n",
           valor2_c1, valor2_c2,
           (resultado2 == 1) ? Cidade : (resultado2 == 2 ? Cidade2 : "Empate"));

    printf("-----------------------------------------------\n");
    printf("Soma dos atributos:\n");
    printf("%s = %.2f\n%s = %.2f\n", Cidade, soma1, Cidade2, soma2);

    if (soma1 > soma2)
        printf("\n %s venceu a rodada! 🏆\n", Cidade);
    else if (soma2 > soma1)
        printf("\n %s venceu a rodada! 🏆\n", Cidade2);
    else
        printf("\n Empate! ⚖️\n");

    printf("==================================================\n");

    return 0;
}