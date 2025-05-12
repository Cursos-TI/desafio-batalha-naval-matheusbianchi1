#include <stdio.h>

int main() {
  
    // Inicializando o Tabuleiro Inicial
   
    int tabuleiro[10][10] = {0};

   
    // Criando os Vetores dos Navios (tamanho 3)

    int navio_horizontal[3] = {3, 4, 5}; // colunas do navio horizontal
    int navio_vertical[3] = {6, 7, 8};   // linhas do navio vertical

    
    // Definindo as coordenadas dos navios no tabuleiro

    int linha_h = 4;    // linha do navio horizontal
    int coluna_v = 8;   // coluna do navio vertical

   
    // Verificar se as posições dos navios se sobrepõem

    int sobreposicao = 0;
    int i;
    for (i = 0; i < 3; i++) {
        if (linha_h == navio_vertical[i] && navio_horizontal[i] == coluna_v) {
            sobreposicao = 1;
        }
    }

   
    // Posicionar os navios só se não houver sobreposição
 
    if (sobreposicao == 0) {
        // Navio Horizontal
        for (i = 0; i < 3; i++) {
            tabuleiro[linha_h][navio_horizontal[i]] = 3;
        }

        // Navio Vertical
        for (i = 0; i < 3; i++) {
            tabuleiro[navio_vertical[i]][coluna_v] = 3;
        }
    } else {
        printf("Erro: As posições dos navios se sobrepõem!\n");
    }

    
    // Imprimir o Tabuleiro

    printf("\n   ");
    char letra;
    for (letra = 'A'; letra <= 'J'; letra++) {
        printf("%c ", letra);
    }
    printf("\n");

    int linha, coluna;
    for (linha = 0; linha < 10; linha++) {
        printf("%2d ", linha + 1);
        for (coluna = 0; coluna < 10; coluna++) {
            printf("%d ", tabuleiro[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}
