#include <stdio.h>
#include<math.h>
#include<string.h>

 main() {
int candidato, opcao, contadorVotos=0, i=0, c1=0, c2=0,c3=0,c4=0,vn=0,vb=0, totalVotos;

  printf("Digite o codigo de seus candidatos:\n c1-Paulo, c2-Maria, c3-Alberto, c4-Bruna, c5-nulo, c6-branco\n");
  scanf("%d", &candidato);

do{
   if(candidato!= 0 && candidato!=1 && candidato!=2 && candidato!= 3 && candidato!=4 && candidato!=5 && candidato!=6){
       printf("codigo não valido. Tente novamente.");
         break;
}
  
}while(candidato!= 0 && candidato!=1 && candidato!=2 && candidato!= 3 && candidato!=4 && candidato!=5 && candidato!=6);

     switch(candidato){
       case 1:
          c1++;
          contadorVotos++;
       break;
       case 2:
          c2++;
          contadorVotos++;
       break;
       case 3:
          c3++;
          contadorVotos++;
       break;
       case 4:
          c4++;
          contadorVotos++;
       break;
       case 5:
          vn++;
          contadorVotos++;
       break;
       case 6:
          vb++;
          contadorVotos++;
       break;
     }
     
   }while(candidato!=0);

   printf("\nNumero de votos do candidato 1: %d",c1);
   printf("\nNumero de votos do candidato 2: %d",c2);
   printf("\nNumero de votos do candidato 3: %d",c3);
   printf("\nNumero de votos do candidato 4: %d",c4);
   printf("\nNumero de votos Nulos: %d",vn);
   printf("\nNumero de votos em Branco: %d\n\n",vb);

   if(c1>c2 && c1>c3 && c1 >c4 && c1>vn && c1>vb){
     printf("O Candidato brasilio é eleito o Presidente.");
   }else if (c2>c1 && c2>c3 && c2 >c4 && c2>vn && c2>vb){
     printf("O Candidato São Paulo é eleito o Presidente.");
   }else if (c3>c1 && c3>c2 && c3 >c4 && c3>vn && c3>vb){
     printf("O Candidato Campinas é eleito o Presidente.");
   }else if (c4>c1 && c4>c2 && c4 >c3 && c4>vn && c4>vb){
     printf("O Candidato Belo Horizonte é eleito o Presidente.");
   }else if (vn>c1 && vn>c2 && vn >c3 && vn>c4 && vn>vb){
     
        if(c1>c2 && c1>c3 && c1 >c4 && c1>vn && c1>vb){
          c1+=vn;
          printf("O Candidato brasilio é eleito o Presidente.");
        }else if (c2>c1 && c2>c3 && c2 >c4){
          c2+=vn;
          printf("O Candidato São Paulo é eleito o Presidente.");
        }else if (c3>c1 && c3>c2 && c3 >c4){
          c3+=vn;
          printf("O Candidato Campinas é eleito o Presidente.");
        }else if (c4>c1 && c4>c2 && c4 >c3){
          c4+=vn;
          printf("O Candidato Belo Horizonte é eleito o Presidente.");
        }
   }else if (vb>c1 && vb>c2 && vb >c3 && vb>c4 && vb>vn){
        if(c1>c2 && c1>c3 && c1 >c4 && c1>vn && c1>vb){
          c1+=vb;
          printf("O Candidato brasilio é eleito o Presidente.");
        }else if (c2>c1 && c2>c3 && c2 >c4){
          c2+=vb;
          printf("O Candidato São Paulo é eleito o Presidente.");
        }else if (c3>c1 && c3>c2 && c3 >c4){
          c3+=vb;
          printf("O Candidato Campinas é eleito o Presidente.");
        }else if (c4>c1 && c4>c2 && c4 >c3){
          c4+=vb;
          printf("O Candidato Belo Horizonte é eleito o Presidente.");
        }
   }else if(c1==c2 || c1==c3 ||c1 ==c4 || c2 ==c3 || c2==c4 || c3==c4){
          printf("Eleições terá segundo turno entre os candidatos mais votados.");
   }
