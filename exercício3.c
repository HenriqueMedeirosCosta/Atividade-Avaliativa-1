#include <stdio.h>
#include<math.h>
#include<string.h>

 main() {
  int a, b, c, triangulo;

  printf("Digite o valor de A\n");
  scanf("%d,", &a);
  printf("Digite o valor de B\n");
  scanf("%d", &b);
  printf("Digite o valor de C\n");
  scanf("%d", &c);

  if ((a + b) > c && (c + a) > b && (b + c) > a) {
    if (a == b && b == c) {
      printf("Esses valores formam um triângulo equilátero");
    } else if (a == b || b == c || c == a) {
      printf("Esses valores formam um triângulo isósceles");
    } else if (a != b && a != c && b != c) {
      printf("Esses valores formam um triângulo escaleno");
    }
  } else {
    printf("Esses valores não formam um triangulo.");
  }
