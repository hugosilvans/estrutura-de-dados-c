#include "equipe.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Time *LerDados(char *nomeArquivo) {
    FILE *arquivo = fopen(nomeArquivo, "r");
    if (!arquivo)
        return NULL;
    char cabecalho[256];
    if (!fgets(cabecalho, sizeof cabecalho, arquivo)) {
        fclose(arquivo);
        return NULL;
    }
    Time *times = calloc(20, sizeof *times);
    if (!times) {
        fclose(arquivo);
        return NULL;
    }
    for (int i = 0; i < 20; i++) {
        Time *t = &times[i];
        // A largura de cada campo respeita o tamanho dos arrays da struct.
        if (fscanf(arquivo, "%d;%39[^;];%49[^;];%d;%d;%d;%d;%d;%d;%d;%d", &t->Pos, t->Estado,
                   t->Equipe, &t->Pts, &t->J, &t->V, &t->E, &t->D, &t->GP, &t->GC, &t->SG) != 11) {
            free(times);
            fclose(arquivo);
            return NULL;
        }
        t->Aproveitamento = t->J > 0 ? 100.0f * t->Pts / (3.0f * t->J) : 0;
    }
    fclose(arquivo);
    return times;
}

void InsertionSort(Time *vetor, int tamanho) {
    // Move cada equipe até sua posição alfabética na parte já ordenada.
    for (int i = 1; i < tamanho; i++) {
        Time chave = vetor[i];
        int j = i - 1;
        while (j >= 0 && strcmp(vetor[j].Equipe, chave.Equipe) > 0) {
            vetor[j + 1] = vetor[j];
            j--;
        }
        vetor[j + 1] = chave;
    }
}
int getPontos(Time *times, int posicao) {
    for (int i = 0; i < 20; i++)
        if (times[i].Pos == posicao)
            return times[i].Pts;
    return ERRO;
}
float getAproveitamento(Time *times, char *nome) {
    for (int i = 0; i < 20; i++)
        if (strcmp(times[i].Equipe, nome) == 0)
            return times[i].Aproveitamento;
    return ERRO;
}
