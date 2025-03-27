#include <stdio.h>
#include <string.h>

//printa tabela
void printtab(char tab[3][3]) {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf(" %c ", tab[i][j]); 
            if (j < 2) printf("|"); 
        }
        printf("\n");
        if (i < 2) printf("---|---|---\n");
    }
    printf("\n");
}

//-----------------------------------------------------
//zera o tabuleiro
void zerartab(char tab[3][3]){
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            tab[i][j] = ' ';
        }
    }
}

//------------------------------------------------------
//verificado de vitórias
int venceu(char tab[3][3]) {
    // Verifica diagonais
    if (tab[0][0] == tab[1][1] && tab[1][1] == tab[2][2] && tab[0][0] != ' ') return 1; // Diagonal principal
    if (tab[0][2] == tab[1][1] && tab[1][1] == tab[2][0] && tab[0][2] != ' ') return 1; // Diagonal secundária

    // Verifica linhas
    for (int i = 0; i < 3; i++) {
        if (tab[i][0] == tab[i][1] && tab[i][1] == tab[i][2] && tab[i][0] != ' ') return 1;
    }

    // Verifica colunas
    for (int j = 0; j < 3; j++) {
        if (tab[0][j] == tab[1][j] && tab[1][j] == tab[2][j] && tab[0][j] != ' ') return 1;
    }

    // Se não houver vencedor
    return 0;
}

//---------------------------------------------------------
// Função para verificar empate
int deuVelha(char tab[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (tab[i][j] == ' ') {
                return 0; // Ainda há posições vazias, não deu velha
            }
        }
    }
    return 1; // Todas as posições estão preenchidas, deu velha
}


//---------------------------------------------------------------
// Função para verificar se a jogada é válida
int jogadaValida(int jogada, char tab[3][3], int *linha, int *coluna) {
    *linha = (jogada - 1) / 3;
    *coluna = (jogada - 1) % 3;

    if (jogada < 1 || jogada > 9 || tab[*linha][*coluna] != ' ') {
        printf("Posição inválida! Tente novamente.\n");
        return 0; // Jogada inválida
    }
    return 1; // Jogada válida
}

//---------------------------------------CODIGO PRINCIPAL---------------------------------------

//MENU
int main(){
    char tab [3][3];
    char p1[30], p2[30];
    int vez = 0, jogada, linha, coluna, ganhou = 0;

    printf("\n");
    printf("==========================\n");
    printf("      JOGO DA VELHA       \n");
    printf("==========================\n");
    //RECEBER JOGADORES
    printf("Nome do jogador (X): ");
    scanf("%s", p1);

    printf("Nome do jogador (O): ");
    scanf(" %s", p2);

    printf("Boa sorte, %s (X) e %s (O)!\n", p1, p2);
    //--------------------------------------------------

    //zera o tabuleiro
    zerartab(tab);
    //--------------------------------

    //inicio do jogo
    while (ganhou==0){
        printtab(tab); // Exibe o tabuleiro
        // Verifica de quem é a vez
        if (vez == 0) {
            printf("%s (X), escolha uma posicao (1-9): ", p1);
        } else {
            printf("%s (O), escolha uma posicao (1-9): ", p2);
        }
        scanf("%d", &jogada);

        // Verifica se a jogada é válida
        if (!jogadaValida(jogada, tab, &linha, &coluna)) {
            continue; // Volta ao início do loop
        }

        // Faz a jogada
        if (vez == 0) {
            tab[linha][coluna] = 'X'; // Jogador 1 (X)
        } else {
            tab[linha][coluna] = 'O'; // Jogador 2 (O)
        }
        // Alterna a vez
        vez = 1 - vez; // Troca 0 para 1 ou 1 para 0
        //verifica se ganhou
        ganhou = venceu(tab);
        // Verifica se deu velha
        if (ganhou == 0 && deuVelha(tab)) {
            printtab(tab);
            printf("Deu velha! O jogo terminou em empate.\n");
            break; // Sai do loop
        }

        if(ganhou==1 && vez==1){
            printtab(tab);
            printf("JOGADOR %s ganhou", p1);
        }
        else if(ganhou==1 && vez==0){
            printtab(tab);
            printf("JOGADOR %s ganhou", p2);
        }

        else continue;
    }

    return 0;
}