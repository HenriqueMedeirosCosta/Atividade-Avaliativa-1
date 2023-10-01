#include <stdio.h>

int main() {
  int main() {
    
    int x, fx;
    printf("Digite um valor de x, para calcular o valor de f(x):\n");
    scanf("%d", &x);
    fx = (5 * x + 3) / sqrt(pow(x, 2) - 16);
    printf("O valor de f(x) é: %d\n\n", fx);

    
    float chico = 1.50, ze = 1.10;
    int anos = 0;

    while (chico > ze) {
        chico += 0.02;
        ze += 0.03;
        anos++;
    }
    printf("Zé será maior que Chico em %d anos.\n\n", anos);

    
    int ladoA, ladoB, ladoC;

    printf("Digite o valor de A:\n");
    scanf("%d", &ladoA);
    printf("Digite o valor de B:\n");
    scanf("%d", &ladoB);
    printf("Digite o valor de C:\n");
    scanf("%d", &ladoC);

    if ((ladoA + ladoB > ladoC) && (ladoC + ladoA > ladoB) && (ladoB + ladoC > ladoA)) {
        if (ladoA == ladoB && ladoB == ladoC) {
            printf("Esses valores formam um triângulo equilátero.\n");
        } else if (ladoA == ladoB || ladoB == ladoC || ladoC == ladoA) {
            printf("Esses valores formam um triângulo isósceles.\n");
        } else {
            printf("Esses valores formam um triângulo escaleno.\n");
        }
    } else {
        printf("Esses valores não formam um triângulo.\n");
    }

    return 0;
}
