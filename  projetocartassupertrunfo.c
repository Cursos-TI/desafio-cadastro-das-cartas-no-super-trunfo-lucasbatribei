#include <stdio.h>
int main(){
    printf("cadastro cartas super trunfo: \n");
     int codigo;                                                
     float area,Pib,populacao,pontosturisticos,densidadepopulacional,pibpercapita;
     char nome[50];

     printf("digite código do país:\n");
     scanf("%d",&codigo);

     printf("digite a área:\n");
     scanf("%f", &area);

     printf("digite o pib:\n");
     scanf("%f", &Pib);

     printf("digite a população:\n");
     scanf("%f", &populacao);

     printf("digite quantidade de pontos turísticos:\n");
     scanf("%d", &pontosturisticos);

     printf("digite o nome:\n");
     scanf("%s", &nome);

     densidadepopulacional =(populacao / area);
     pibpercapita =(Pib / populacao);

     printf("código do país: %d - área: %f",codigo,area);
     printf("pib: %f - nome:%s", Pib,nome);
     printf("população: %f - pontos turísticos: %d98",populacao,pontosturisticos);
     printf("densidade populacional: %f - PIB per Capita: %f", densidadepopulacional,pibpercapita);
}