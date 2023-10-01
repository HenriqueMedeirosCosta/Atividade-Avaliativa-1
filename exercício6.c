#include <stdio.h>
#include<math.h>
#include<string.h>

 main() {
float x, y;

   printf("De um valor para X:\n");
   scanf("%f",&x);
   printf("De um valor para Y:\n");
   scanf("%f",&y);


   if(x==0 && y==0){
     printf("origem ");
   }else if (x==0 && y!=0){
     printf("Eixo X");
   }else if (x!=0 && y==0){
     printf("Eixo Y");
   }else if (x > 0 && y > 0){
     printf("Pertence ao primeiro quadrante, nos pontos(%.1f,%.1f)",x , y);
   }else if(x < 0 && y > 0){
     printf("Pertence ao segundo quadrante, nos pontos(%.1f,%.1f)",x , y);
   }else if (x < 0 && y < 0){
     printf("Pertence ao terceiro quadrante, nos pontos(%.1f,%.1f)",x , y);
   }else if(x > 0 && y < 0){
     printf("Pertence ao quarto quadrante, nos pontos(%.1f,%.1f)",x , y);
   }
