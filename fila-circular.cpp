#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#define TAM 5

int frente = 0;
int tras = 0;
int x = 0;
int total = 0;

void TornaVazia(int fila[TAM], int frente, int *tras){
    frente = 0;
    *tras = frente;
}

void  VerifVazia(int fila[TAM], int frente, int *tras){
    if (frente == *tras){
        printf("Erro: Fila Vazia!\n");
    }else{
        printf("Fila NAO esta vazia!!\n");
    }  
}

void  enfileirar(int x, int fila[TAM], int *tras, int frente){
	if(total == TAM){
		printf("Fila Cheia!");
	}else{
		fila[*tras] = x; // insere no final da fila
		*tras = (*tras + 1) % TAM;
		total++;
	}
}

void  desenfileirar(int fila[TAM],  int tras, int *frente){
	if(*frente == tras){
		printf("Fila Vazia!");
	}else{
		fila[*frente] = 0;
		*frente = (*frente + 1) % TAM;
		tras--;
		total--;


	}
}

void  printfila(int fila[TAM]){
    printf("\n") ;

    for(int i = 0; i < TAM; i++){
        printf("%d - ", fila[i]);
    }
    printf("\n");
}

void  filaCheia(int fila[TAM], int frente, int *tras){
	if (total == TAM){
		printf("Fila Cheia!!!");
	}else{
        printf("Fila NAO esta Cheia!!\n");
    }  
}

int main(){
    int fila[TAM] = {0,0,0,0,0};
    
    TornaVazia(fila, frente, &tras);
    printfila(fila);
    VerifVazia(fila, frente, &tras);
    enfileirar(10, fila, &tras, frente);
    printfila(fila);
    enfileirar(20, fila, &tras, frente);
    printfila(fila);
    desenfileirar(fila, tras, &frente);
    printfila(fila);
    desenfileirar(fila, tras, &frente);
    printfila(fila);
    enfileirar(31, fila, &tras, frente);
    printfila(fila);
    enfileirar(41, fila, &tras, frente);
    printfila(fila);
    enfileirar(51, fila, &tras, frente);
    printfila(fila);
    filaCheia(fila, frente, &tras);
    enfileirar(21, fila, &tras, frente);
    printfila(fila);
    enfileirar(11, fila, &tras, frente);
    printfila(fila);
    filaCheia(fila, frente, &tras);




}