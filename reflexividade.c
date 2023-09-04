//PABLO BOAVENTURA MENEZES ASSUNÇÃO

#include <stdio.h>
#include <stdbool.h>

bool verifica_reflexividade(int matriz[][100], int n) {
    for (int i = 0; i < n; i++) {
        if (matriz[i][i] != 1) {
            return false;
        }
    }
    return true;
}

bool verifica_irreflexividade(int matriz[][100], int n) {
    for (int i = 0; i < n; i++) {
        if (matriz[i][i] == 1) {
            return false;
        }
    }
    return true;
}

int main(void) {
    int n;
    printf("Digite o numero de elementos do conjunto: ");
    scanf("%d", &n);
    
    int matriz[100][100];
    
    printf("Digite os dados da matriz: \n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    
    printf("\n");
    
    bool reflexiva = verifica_reflexividade(matriz, n);
    bool irreflexiva = verifica_irreflexividade(matriz, n);
    
     if (reflexiva) {
        printf("Relacao reflexiva.\n");
    } else if (irreflexiva) {
        printf("Relacao irreflexiva.\n");
    } else {
        printf("Nenhuma das opcoes.\n");
    }
    
    return 0;
}
