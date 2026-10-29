#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "equipe.h"

int main() {

    Time *Tabela = LerDados("tabela.csv");
    if (!Tabela)
        return 1;
    InsertionSort(Tabela, 20);
    for (int i = 0; i < 20; i++)
        printf("%d\t%.2f\t%s\n", Tabela[i].Pos, Tabela[i].Aproveitamento, Tabela[i].Equipe);

    free(Tabela);
    return 0;
}
