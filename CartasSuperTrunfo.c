#include <stdio.h>

int main(){


    char Estado = 'B';
    char Código [10] = "B01";
    char Cidade [40] = "Bahia";
    int População = 14850513;
    float Área = 567.295;
    float PIB = 138.5;
    int Número = 15;
 
    
    printf("Carta 1 \n");
    
    printf("Estado: ");
    scanf("%c", &Estado);
    
    printf("Código da carta: ");
    scanf("%s", &Código);

    printf("Nome da Cidade: ");
    scanf("%s", &Cidade);

    printf("População: ");
    scanf("%d", &População);
    
    printf("Área km²: ");
    scanf("%f", &Área );

    printf("PIB: ");
    scanf("%f", &PIB);

    printf("Número de Pontos Turísticos: " );
    scanf("%d", &Número);
    

    printf("\n--------------------------------------------\n");


    char Estado2 = 'A';
    char Código2 [10] = "A02";
    char Cidade2 [30] = "Alagoas";
    int População2 = 15850513;
    float Área2 = 561.295;
    float PIB2 = 138.3;
    int Número2 = 13;

    printf("Carta 2 \n");

    printf("Estado: ");
    scanf("%S", &Estado2);
    
    printf("Código da carta: ");
    scanf("%S", &Código2);

    printf("Nome da Cidade: ");
    scanf("%s", &Cidade2);

    printf("População: ");
    scanf("%d", &População2);
    
    printf("Área km²: ");
    scanf("%f", &Área2);

    printf("PIB: ");
    scanf("%f", &PIB2);

    printf("Número de Pontos Turísticos: " );
    scanf("%d", &Número2);


    printf("\n-------------------INFORMAÇÕES DAS CARTAS CADASTRADAS-----------------------\n");


    printf("Carta 1 \n");
    printf("Estado: %c \n", Estado);
    printf("Código da carta: %s\n", Código);
    printf("Nome da Cidade: %s\n", Cidade);
    printf("População: %d\n", População);
    printf("Área: %f km²\n", Área);
    printf("PIB: %f bilhões de reais \n", PIB);
    printf("Número de Pontos Turísticos: %d\n", Número);

printf("\n--------------------------------------------\n");

    printf("Carta 2 \n");
    printf("Estado: %c \n", Estado2);
    printf("Código da carta: %s\n", Código2);
    printf("Nome da Cidade: %s\n", Cidade2);
    printf("População: %d\n", População2);
    printf("Área: %F km²\n", Área2);
    printf("PIB: %F bilhões de reais \n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", Número2);

    return 0;
}