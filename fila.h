#ifndef FILA_H
#define FILA_H

#define MAXFILA 100

typedef struct {
    char elementodaFila[MAXFILA][40];
    int fim;
} Fila;

extern Fila x;

int Inicializada(void);
void LimparIniciarFila(void);
int FilaVazia(void);
int FilaCheia(void);
void Enfileirar(void);
void Desenfileirar(void);
void MostrarFila(void);
void Primeiro(void);

#endif
