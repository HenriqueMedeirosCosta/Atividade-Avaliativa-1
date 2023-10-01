#include <stdio.h>
#include<math.h>
#include<string.h>

 main() {
float  n1, n2, n3, totalAlunos=0, opcao, media, mediaGeral, qtdAlunos=0;

   do{
     printf("\nDigite a nota da primeira prova:\n");
     scanf("%f",&n1);
     printf("\nDigite a nota da segunda prova:\n");
     scanf("%f",&n2);
     printf("\nDigite a nota da terceira prova:\n");
     scanf("%f",&n3);

     media = ((n1 *2) + (n2 * 4) + (n3 * 3))/10;
      if(media>=7){
        printf("\nAprovado.\n %.2f",media);
      }else{
        printf("\nReprovado.\n %.2f",media);
      }

     totalAlunos +=media;
     qtdAlunos++;

     
     do{
     printf("\nDeseja adcionar algum aluno:\n 1- Sim \n 2-Não\n");
     scanf("%f",&opcao);
      if(opcao !=2 && opcao !=1){
        printf("Opção invalida.");
      }else{
        printf("Aguarde.");
      }
     }while(opcao !=2 && opcao!=1);
     
   }while(opcao ==1);

  printf("\nmedia do aluno:%.2f",media);

   mediaGeral = totalAlunos / qtdAlunos;

   printf("\nA media geral da turma é: %.2f",mediaGeral);
 }
