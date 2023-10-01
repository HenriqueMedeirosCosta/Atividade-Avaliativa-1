#include <stdio.h>
#include<math.h>
#include<string.h>

 main() {
float salario, contadorsalario = 0, maiorsalario = 0, diferenca, pouco = 0, geralpouco = 0;
    int percentual = 0, filhos, npessoas = 0, contadorfilho = 0;

    do {
        printf("Digite o seu salario\n");
        scanf("%f", &salario);

        printf("Digite quantos filhos você tem\n");
        scanf("%d", &filhos);

        if (salario > 0) {
            contadorsalario += salario;
            contadorfilho += filhos;
            npessoas++;

            if (salario > maiorsalario) {
                maiorsalario = salario;
            } else if (salario < 100) {
                pouco++;
                printf("Caso não deseje informar outro dado, digitar um valor negativo no campo renda mensal e nfilhos\n");
            } else {
                printf("Aguarde.\n");
            }
        }
    } while (salario > 0);

    contadorsalario = contadorsalario / npessoas;
    contadorfilho = contadorfilho / npessoas;

    geralpouco = (pouco / npessoas) * 100;

    printf("\nA média de salario da população é: R$%.2f", contadorsalario);
    printf("\nA média de filhos por pessoa é: %d Filhos", contadorfilho);
    printf("\nO maior salario é: R$%.2f", maiorsalario);
    printf("\nO percentual de pessoas que recebem menos de 100 reais é: %.2f%%", geralpouco);
 }
