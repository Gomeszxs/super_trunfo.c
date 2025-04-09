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


    printf("Qual Nome do Estado: ");
    scanf("%s", Estado);
    
    printf("Qual Código da Carta: ");
    scanf("%s", CodigodaCarta);
    
    printf("Qual Nome da Cidade: ");
    scanf("%s", NomedaCidade);
    
    printf("Qual a população: ");
    scanf("%d", &Populacao);
    
    printf("Qual a Área em km²: ");
    scanf("%f", &AreaemKm2);
    
    printf("Qual o PIB do estado: ");
    scanf("%f", &PIB);
    
    printf("Qual o número de pontos turísticos: ");
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
    float AreaemKm22 = 693000;
    float PIB2 = 62900000000;
    int NumerodePontosTuristicos2 = 15;
    float DensidadePopulacional2 = Populacao2 / AreaemKm22;
    float PIBPerCapita2 = PIB2 / Populacao2;

    float SuperPoder2 = Populacao2 + AreaemKm22 + PIB2 + DensidadePopulacional2 + PIBPerCapita2;

    printf("Qual Nome do Estado2: ");
    scanf("%s", Estado2);
    
    printf("Qual Código da Carta2: ");
    scanf("%s", CodigodaCarta2);
    
    printf("Qual Nome da Cidade2: ");
    scanf("%s", NomedaCidade2);
    
    printf("Qual a população2: ");
    scanf("%d", &Populacao2);
    
    printf("Qual a Área em km²2: ");
    scanf("%f", &AreaemKm22);
    
    printf("Qual o PIB do estado2: ");
    scanf("%f", &PIB2);
    
    printf("Qual o número de pontos turísticos2: ");
    scanf("%d", &NumerodePontosTuristicos2);

    
    printf(" - Estado 2: %s\n - Código da Carta 2: %s\n - Nome da Cidade 2: %s\n", Estado2, CodigodaCarta2, NomedaCidade2);
    printf(" - População 2: %d\n - Área em km² 2: %.2f\n - PIB: %.2f\n - Número de pontos turísticos 2: %d\n", Populacao2, AreaemKm22, PIB2, NumerodePontosTuristicos2);
    printf(" - Densidade Populacional: %.2f\n - Pib Per Capita: %.2f\n", DensidadePopulacional2, PIBPerCapita2);
    printf(" - SuperPoder2: %.2f\n", SuperPoder2);

    //Comparações

    int ResultadoA, ResultadoB, ResultadoC, ResultadoD, ResultadoE, ResultadoF;

    ResultadoA = Populacao < Populacao2;
    ResultadoB = AreaemKm2 < AreaemKm22;
    ResultadoC = PIB < PIB2;
    ResultadoD = NumerodePontosTuristicos < NumerodePontosTuristicos2;
    ResultadoE = DensidadePopulacional < DensidadePopulacional2;
    ResultadoF= PIBPerCapita < PIBPerCapita2;

    printf("População da carta 1 (%d) é menor que a carta 2 (%d): %d\n", Populacao, Populacao2, ResultadoA);
    printf("Área da carta 1 (%.2f) é menor que a carta 2 (%.2f): %d\n", AreaemKm2, AreaemKm22, ResultadoB);
    printf("PIB da carta 1 (%.2f) é menor que a carta 2 (%.2f): %d\n", PIB, PIB2, ResultadoC);
    printf("Número de pontos turísticos da carta 1 (%d) é menor que a carta 2 (%d): %d\n", NumerodePontosTuristicos, NumerodePontosTuristicos2, ResultadoD);
    printf("Densidade Populacional da carta 1 (%.2f) é menor que a carta 2 (%.2f): %d\n", DensidadePopulacional, DensidadePopulacional2, ResultadoE);
    printf("PIB Per Capita da carta 1 (%.2f) é menor que a carta 2 (%.2f): %d\n", PIBPerCapita, PIBPerCapita2, ResultadoF);

    if (Populacao > Populacao2) 
    { printf("População da carta 1 venceu !!!\n"); }
    else
    { printf("População da carta 2 venceu !!!\n"); }

    if (AreaemKm2 > AreaemKm22) 
    { printf("Área da carta 1 venceu !!!\n"); }
    else
    { printf("Área da carta 2 venceu !!!\n"); }
    
    if ( PIB > PIB2) 
    { printf("PIB da carta 1 venceu !!!\n"); }
    else
    { printf("PIB da carta 2 venceu !!!\n"); }

    if (NumerodePontosTuristicos > NumerodePontosTuristicos2) 
    { printf("Números de Pontos Turísticos da carta 1 venceu !!!\n"); }
    else
    { printf("Números de Pontos Turísticos da carta 2 venceu !!!\n"); }

    if (DensidadePopulacional < DensidadePopulacional2) 
    { printf("Densidade Populacional da carta 1 venceu !!!\n"); }
    else
    { printf("Densidade Populacional da carta 2 venceu !!!\n"); }

    if (PIBPerCapita > PIBPerCapita2) 
    { printf("PIB Per Capita da carta 1 venceu !!!\n"); }
    else
    { printf("PIB Per Capita da carta 2 venceu !!!\n"); }
     
    int escolha;
    
    printf("***BATALHA DE ATRIBUTOS***\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1. População\n"); 
    printf("2. Área em km²\n");
    printf("3. PIB\n"); 
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB Per Capita\n");
    printf("Digite o número da sua escolha: ");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
        printf("População de RioVerde x População de Salvador\n");
        if (Populacao > Populacao2)
        printf("População de RioVerde venceu!!!");
     else if (Populacao < Populacao2)
        printf("População de Salvador venceu!!!");
        else
        printf("EMPATE NA POPULAÇÃO\n");
    break;

    case 2:
        printf("Aréa de RioVerde x Área de Salvador\n");
        if (AreaemKm2 > AreaemKm22)
        printf("Área de RioVerde venceu!!!\n");
        else if (AreaemKm2 < AreaemKm22)
        printf("Área de Salvador venceu!!!\n");
        else
        printf("EMPATE NA ÁREA\n");
    break;
    
    case 3:
        printf("PIB de RioVerde x PIB de Salvador\n");
        if (PIB > PIB2)
        printf("PIB de RioVerde venceu!!!");
        else if (PIB < PIB2)
        printf("PIB de Salvador venceu!!!");
        else
        printf("EMPATE NO PIB\n");
    break;
    case 4:
        printf("Número de pontos turísticos de RioVerde x Número de pontos turísticos de Salvador\n");
        if (NumerodePontosTuristicos > NumerodePontosTuristicos2)
        printf("Número de pontos turísticos de RioVerde venceu!!!\n");
        else if (NumerodePontosTuristicos < NumerodePontosTuristicos2)
        printf("Número de pontos turísticos de Salvador venceu!!!\n");
        else
        printf("EMPATE NO NÚMERO DE PONTOS TURÍSTICOS\n");
break;

    case 5:
        printf("Densidade Populacional de RioVerde x Densidade Populacional de Salvador\n");
        if (DensidadePopulacional > DensidadePopulacional2)
        printf("Densidade Populacional de RioVerde venceu!!!\n");
        else if (DensidadePopulacional < DensidadePopulacional2)
        printf("Densidade Populacional de Salvador venceu!!!\n");
        else
        printf("EMPATE NA DENSIDADE POPULACIONAL\n");
break;
    case 6:
        printf("PIB Per Capita de RioVerde x PIB Per Capita de Salvador\n");
        if (PIBPerCapita > PIBPerCapita2)
        printf("PIB Per Capita de RioVerde venceu!!!\n");
        else if (PIBPerCapita < PIBPerCapita2)
        printf("PIB Per Capita de Salvador venceu!!!\n");
        else
        printf("EMPATE NO PIB PER CAPITA\n");
break;
    default:
        printf("Escolha inválida!\n");
break;
    }

    return 0;
}



