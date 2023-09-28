#include <stdio.h>
#include <stdlib.h>

int primo(int num) {
    if (num < 2)
        return 0;

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }

    return 1;
}

void goldbach_sum(int num) {
    if (num < 4 || num % 2 != 0) {
        printf("Por favor, insira um numero inteiro par maior que 2.\n");
        return;
    }

    printf("Soma de dois numeros primos para %d:\n", num);

    for (int i = 2; i <= num / 2; i++) {
        if (primo(i) && primo(num - i)) {
            printf("%d + %d = %d\n", i, num - i, num);
        }
    }
}

int main() {
    int n;

    printf("Digite quatro numeros inteiros pares maiores que 2:\n");

    for (int i = 0; i < 4; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &n);
        goldbach_sum(n);
        printf("\n");
    }

    return 0;
}
