#include <stdio.h>

int main(){

///////// CARTA 1 /////////

   char Estado = 'B';
    char Código [10] = "B01";
    char Cidade [20] = "Bahia";
    int População = 14850513;
    float Área = 567.295;
    float PIB = 138.5;
    int Número = 17;
    float DP = (float) (População / Área);
    float PPC = (float) (População / PIB);
    float CPC = (DP + PPC);
    int InDen = 1.0 / DP;
    float Superpoder = População + Área + PIB + Número + PPC + InDen;


///////// CARTA 2 /////////


    char Estado2 = 'A';
    char Código2 [10] = "A02";
    char Cidade2 [20] = "Alagoas";
   int População2 = 75880413;
    float Área2 = 561.295;
    float PIB2 = 138.3;
    int Número2 = 13;
    float DP2 = (float) (População2 / Área2);
    float PPC2 = (float) (População2 / PIB2);
    float CPC2 = (DP2 + PPC2);
    int InDen2 = 1.0 / DP2;
    float Superpoder2 = População2 + Área2 + PIB2 + Número2 + PPC2 + InDen2;


    /////////// INFORMAÇÕES DAS CARTAS ///////////


    printf("\n-------------------- CARTA 1 -----------------------\n");


    printf("\nEstado: %c\n", Estado);
    printf("Código da carta: %s\n", Código);
    printf("Nome da Cidade: %s\n", Cidade);
    printf("População: %d\n", População);
    printf("Área: %.2f km²\n", Área);
    printf("PIB: %.2f bilhões de reais \n", PIB);
    printf("Número de Pontos Turísticos: %d\n", Número);
    printf("Densidade Populacional: %.2f hab/km²", DP);
    printf("\nPIB per Capita: %.2f Reais", PPC);
    printf("\nDensidade Populacional e o PIB per Capita: %.2f", CPC);
    printf("\nSuper Poder: %.2f", Superpoder);



    printf("\n-------------------- CARTA 2 -----------------------\n");


    printf("\nEstado: %c\n", Estado2);
    printf("Código da carta: %s\n", Código2);
    printf("Nome da Cidade: %s\n", Cidade2);
    printf("População: %d\n", População2);
    printf("Área: %.2F km²\n", Área2);
    printf("PIB: %.2F bilhões de reais \n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", Número2);
    printf("Densidade Populacional: %.2f hab/km²", DP2);
    printf("\nPIB per Capita: %.2f Reais", PPC2);
    printf("\nDensidade Populacional e o PIB per Capita: %.2f", CPC2);
    printf("\nSuper Poder: %.2f", Superpoder2);


     printf("\n-------------------- COMPARAÇÕES DE CARTAS -----------------------\n");

    printf("\nPopulação: Carta 2 venceu (%d)", População > População2);
    printf("\nÁrea: Carta 1 venceu (%d)", Área > Área2);
    printf("\nPIB: Carta 1 venceu (%d)", PIB > PIB2);
    printf("\nPontos Turisticos: Carta 1 venceu (%d)", Número > Número2);
    printf("\nDensidade Populacional: Carta 1 venceu (%d)", DP < DP2);
    printf("\nPIB per Capita: Carta 2 venceu (%d)", PPC > PPC2);
    printf("\nSuper Poder: Carta 2 venceu (%d)", Superpoder > Superpoder2);

    return 0;
    }
