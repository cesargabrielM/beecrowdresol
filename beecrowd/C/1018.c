#include <stdio.h>

int main(){
    // banknotes are 100, 50, 20, 10, 5, 2 and 1
    // receber um valor e destribuir nas notas
    int N;
    int notas[] = {100, 50, 20, 10, 5, 2, 1};
    int quantidade[7] = {0};

    scanf("%d", &N);
    printf("%d\n", N);

    for (int i = 0; i < 7; i++){
        quantidade[i] = N/notas[i];
        N = N%notas[i];
    }
    for (int i = 0; i < 7; i++) {
        if (quantidade[i] >= 0) {
            printf("%d nota(s) de R$ %d,00\n", quantidade[i], notas[i]);
        }
    }
    return 0;
}