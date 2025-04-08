#include <stdio.h>

int main() {

    //Carta 1 - Estado: Goias - Cidade: RioVerde

    char Estado[50] = "Goias";
    char CodigodaCarta[30] = "A01";
    char NomedaCidade[25] = "rioverde";
    int Populacao = 22570;
    float AreaemKm2 = 83900;
    float PIB = 16300000000;
    int NumerodePontosTuristicos = 7;
    float DensidadePopulacional = Populacao / AreaemKm2;
    float PIBPerCapita = PIB / Populacao;
    float SuperPoder = Populacao + AreaemKm2 + PIB + DensidadePopulacional + PIBPerCapita;


    printf("Qual Nome do Estado: \n");
    scanf("%s", Estado);
    
    printf("Qual Código da Carta: \n");
    scanf("%s", CodigodaCarta);
    
    printf("Qual Nome da Cidade: \n");
    scanf("%s", NomedaCidade);
    
    printf("Qual a população: \n");
    scanf("%d", &Populacao);
    
    printf("Qual a Área em km²: \n");
    scanf("%f", &AreaemKm2);
    
    printf("Qual o PIB do estado: \n");
    scanf("%f", &PIB);
    
    printf("Qual o número de pontos turísticos: \n");
    scanf("%d", &NumerodePontosTuristicos);
    
    printf(" - Estado: %s\n - Código da Carta: %s\n - Nome da Cidade: %s\n", Estado, CodigodaCarta, NomedaCidade);
    printf(" - População: %d\n - Área em km²: %.2f\n - PIB: %.2f\n - Número de pontos turísticos: %d\n", Populacao, AreaemKm2, PIB, NumerodePontosTuristicos);
    printf(" - Densidade Populacional: %.2f - Pib Per Capita: %.2f\n", DensidadePopulacional, PIBPerCapita);
    printf(" - SuperPoder: %.2f\n", SuperPoder);




//Carta 2 - Estado: Bahia - Cidade: Salvador


    char Estado2[50] = "Bahia";
    char CodigodaCarta2[30] = "A02";
    char NomedaCidade2[25] = "Salvador";
    int Populacao2 = 2140000;
    float AreaemKm22 = 693;
    float PIB2 = 62900000000;
    int NumerodePontosTuristicos2 = 15;
    float DensidadePopulacional2 = Populacao2 / AreaemKm22;
    float PIBPerCapita2 = PIB2 / Populacao2;

    float SuperPoder2 = Populacao2 + AreaemKm22 + PIB2 + DensidadePopulacional2 + PIBPerCapita2;

    printf("Qual Nome do Estado2: \n");
    scanf("%s", Estado2);
    
    printf("Qual Código da Carta2: \n");
    scanf("%s", CodigodaCarta2);
    
    printf("Qual Nome da Cidade2: \n");
    scanf("%s", NomedaCidade2);
    
    printf("Qual a população2: \n");
    scanf("%d", &Populacao2);
    
    printf("Qual a Área em km²2: \n");
    scanf("%f", &AreaemKm22);
    
    printf("Qual o PIB do estado2: \n");
    scanf("%f", &PIB2);
    
    printf("Qual o número de pontos turísticos2: \n");
    scanf("%d", &NumerodePontosTuristicos2);

    
    printf(" - Estado 2: %s\n - Código da Carta 2: %s\n - Nome da Cidade 2: %s\n", Estado2, CodigodaCarta2, NomedaCidade2);
    printf(" - População 2: %d\n - Área em km² 2: %.2f\n - PIB: %.2f\n - Número de pontos turísticos 2: %d\n", Populacao2, AreaemKm22, PIB2, NumerodePontosTuristicos2);
    printf(" - Densidade Populacional: %.2f\n - Pib Per Capita: %.2f\n", DensidadePopulacional2, PIBPerCapita2);
    printf(" - SuperPoder2: %.2f\n", SuperPoder2);

    //Comparações

    int ResultadoA, ResultadoB, ResultadoC, ResultadoD, ResultadoE, ResultadoF;

    ResultadoA = Populacao > Populacao2;
    ResultadoB = AreaemKm2 > AreaemKm22;
    ResultadoC = PIB > PIB2;
    ResultadoD = NumerodePontosTuristicos > NumerodePontosTuristicos2;
    ResultadoE = DensidadePopulacional > DensidadePopulacional2;
    ResultadoF= PIBPerCapita > PIBPerCapita2;

    printf("População da carta 1 (%d) é maior que a carta 2 (%d): %d\n", Populacao, Populacao2, ResultadoA);
    printf("Área da carta 1 (%.2f) é maior que a carta 2 (%.2f): %d\n", AreaemKm2, AreaemKm22, ResultadoB);
    printf("PIB da carta 1 (%.2f) é maior que a carta 2 (%.2f): %d\n", PIB, PIB2, ResultadoC);
    printf("Número de pontos turísticos da carta 1 (%d) é maior que a carta 2 (%d): %d\n", NumerodePontosTuristicos, NumerodePontosTuristicos2, ResultadoD);
    printf("Densidade Populacional da carta 1 (%.2f) é maior que a carta 2 (%.2f): %d\n", DensidadePopulacional, DensidadePopulacional2, ResultadoE);
    printf("PIB Per Capita da carta 1 (%.2f) é maior que a carta 2 (%.2f): %d\n", PIBPerCapita, PIBPerCapita2, ResultadoF);


    return 0;

}