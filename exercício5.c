#include <stdio.h>
#include<math.h>
#include<string.h>

 main() {
float x1, y1, x2, y2, distancia;

   printf("De um valor para x1:");
   scanf("%f",&x1);
   printf("De um valor para y1:");
   scanf("%f",&y1);
   printf("De um valor para x2:");
   scanf("%f",&x2);
   printf("De um valor para y2:");
   scanf("%f",&y2);

   distancia = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));

   printf("A distancia entre P1 e P2 no plano cartesiano é:%.4f", distancia);
 }
