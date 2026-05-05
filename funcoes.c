#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fila.h"

#define COMECO 0
#define FILAVAZIA -1
#define FILACHEIA -2

int iniciada = 0;

void LimparIniciarFila (){
    x.fim = COMECO;
    iniciada = 1;
    printf("Fila limpada/iniciada\n\n");
}

int Inicializada(void) {
    if(iniciada==0) {
        printf("Pilha nao iniciada\n\n");
        return 0;
    }
    else {
        return 1;
    }
}

int FilaVazia(void) { // Verificar se a fila esta vazia
    if (x.fim == COMECO) {
        return FILAVAZIA;
    }
    else {
        return 0;
    }
}

int FilaCheia(void) { // Verificar se a fila esta cheia
    if (x.fim == MAXFILA) {
        return FILACHEIA;
    }
    else {
        return 0;
    }
}

void Enfileirar () {
    if (Inicializada() == 1) { // Checa se a pilha foi iniciada e posteriormente se esta cheia
    char y[40];
    if (FilaCheia() == FILACHEIA) {
        printf("A fila esta cheia\n\n");
    }
    else {
        printf("Qual elemento a ser enfileirado?\n");
        fflush(stdout);
        fflush(stdin);
        fgets(y, 40, stdin);
        y[strcspn(y, "\n")] = 0;             // Remove a quebra de linha lida no fgets
        strcpy(x.elementodaFila[x.fim], y);  // Copia o elemento lido na variavel auxiliar para a fila
        printf("Elemento %s enfileirado\n\n", x.elementodaFila[x.fim]);
        x.fim++;
}
    }
}

void Desenfileirar () {
    if (Inicializada() == 1) {     // Checa se a pilha foi iniciada e posteriormente se esta vazia
    int i;
    char aux[40];
    if (FilaVazia() == FILAVAZIA) {
        printf("A fila esta vazia\n\n");
    }
    else {
        strcpy(aux,x.elementodaFila[COMECO]);   // Copia para a variavel auxiliar o primeiro elemento da fila
        for (i=0; i<x.fim; i++) {
                strcpy(x.elementodaFila[i], x.elementodaFila[i+1]); // Copia o proximo da fila
        }
        x.fim--;
        printf("Elemento %s desenfileirado\n\n", aux);
    }
    }
}

void MostrarFila () {
    if (Inicializada() == 1) {     // Checa se a pilha foi iniciada e posteriormente se esta vazia
    if (FilaVazia() == FILAVAZIA) {
        printf("A fila esta vazia\n\n");
    }
    else {
    int i=0;
    for (i=0; i<x.fim; i++) {
        printf("Posicao %d = %s\n", i+1, x.elementodaFila[i]); // Imprime cada elemento da fila ate x.fim (final)
    }
    printf("\n");
}
    }
}

void Primeiro () {
    if (Inicializada() == 1) {   // Checa se a pilha foi iniciada e posteriormente se esta vazia
    if (FilaVazia() == FILAVAZIA) {
        printf("A fila esta vazia\n\n");
    }
    else {
        printf("Primeiro elemento da fila = %s\n\n", x.elementodaFila[COMECO]); // Imprime o primeiro elemento
    }
    }
}

