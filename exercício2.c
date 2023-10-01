#include <stdio.h>

int main() {
float  c = 1.50, z = 1.10 ; 
   int ano=0;
   
   do{
      c +=0.02;
      z +=0.03;
     ano++;
     
   }while(c > z);

   printf("depois de %d anos zé será maior de chico", ano);
}
