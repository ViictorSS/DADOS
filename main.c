//atv04 

#include <stdio.h>

int somaNaturais(int n) {
    if (n == 1) {
        return 1;  // Caso base: A soma de 1 número natural é ele mesmo.
    } else {
        return n + somaNaturais(n - 1); // Chamada recursiva para calcular a soma de (n-1) números naturais.
    }
}

int main() {
    int n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("O valor de n deve ser um número natural positivo.\n");
    } else {
        int resultado = somaNaturais(n);
        printf("A soma dos primeiros %d números naturais é: %d\n", n, resultado);
    }

    return 0;
}
