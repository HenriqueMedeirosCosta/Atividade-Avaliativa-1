#include <stdio.h>
#include <math.h>

int main() {
    
    int x, f;

  printf("digite um valor para X, para achar a função de(x):\n");
   scanf("%d", &x);

   f = (5 * x + 3) / sqrt(pow(x, 2) - 16);

   printf("A função de X é: %d", f);

}
