#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#include "fila.h"


int main() // Arthur Augusto Eich
{
    char c = '\0';
    printf("\tModelagem da Fila com Vetor\n");
    while(c!='0') {
    printf("1- Limpar/Iniciar Fila\n2- Enfileirar\n3- Desenfileirar\n4- Mostrar Fila\n5- Primeiro da Fila\n0- Sair do Programa\n"); //Menu
    fflush(stdin);
    scanf("%c", &c);
    switch(c){
    case '0':        // Funcoes
        return 0;
    case '1':
        LimparIniciarFila();
        break;
    case '2':
        Enfileirar();
        break;
    case '3':
        Desenfileirar();
        break;
    case '4':
        MostrarFila();
        break;
    case '5':
        Primeiro();
        break;
    }
    }
}

