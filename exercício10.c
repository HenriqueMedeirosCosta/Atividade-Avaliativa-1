#include <stdio.h>
#include<math.h>
#include<string.h>

 main() {
int codCidade=0, veiculos, acidentes, opcao, maiorIndice=0, diferenca, menorIndice=0, mediaVeiculos, totalVeiulos, mediaAcidentes,totalAcidentes;
   char cidade[15], estado[4], estadoRS[]="RS";

   do{

     fflush(stdin);
     printf("\nDigite o nome da cidade:\n");
     fgets(cidade, 15, stdin);
     fflush(stdin);

     printf("\nDigite a UF:\n");
     fgets(estado, 4, stdin);

     printf("\nNumero de veículos de passeio:\n");
     scanf("%d",&veiculos);

       printf("\nNumero de acidentes com vítima:\n");
     scanf("%d",&acidentes);

     totalAcidentes += acidentes;
     totalVeiulos+=veiculos;
     codCidade++;

     if(acidentes>maiorIndice){
        
        maiorIndice= acidentes;
     }

     if(acidentes < menorIndice || codCidade == 1){
       menorIndice = acidentes;
     }

     

     do{
       printf("deseja colocar mais uma cidade:\n 1-Sim\n 0-Não\n");
       scanf("%d",&opcao);
       fflush(stdin);

       if(opcao!=0 && opcao!=1){
         printf("\nopção invalida, tente novamente.\n");
       }

       //fflush(stdin);
     }while(opcao!=0 && opcao!=1);
     
   }while(opcao==1);

   if(strcmp(estado, estadoRS ) ==0){
     mediaAcidentes = totalAcidentes/codCidade;
   }

   mediaVeiculos = totalVeiulos / codCidade;

   printf("\nCidade com maior indice de acidentes: %s",cidade);
   printf("\nMédia total de veíulos nas cidades brasileiras é: %d", mediaVeiculos);
   printf("\nMédia total de acidentes nas cidades no Rio Grande do Sul é: %d", mediaAcidentes);
 }
