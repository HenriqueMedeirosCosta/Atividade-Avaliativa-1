#include <stdio.h>
#include<math.h>
#include<string.h>

 main() {
  int a, b, c, triangulo, angulo ;

   printf("De um valor para  o angulo a:\n");
   scanf("%d",&a);
   printf("De um valor para o angulo b:\n");
   scanf("%d",&b);
   printf("De um valor para o angulo c:\n");
   scanf("%d",&c);

   if((a + b + c) == 180){
     if(a == 90 || b == 90 || c == 90 ){
       printf("É um triangulo retângulo.");
     }else if(a < 90 && b < 90 && c < 90){
       printf("É um triangulo acutângulo.");
     }else if(a > 90 || b > 90 || c > 90){
       printf("É um triangulo obtusângulo.");

     }
   }else{
     printf("não é um triangulo obtusângulo ou acutângulo ou retângulo");
   }
