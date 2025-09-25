/*
 * Secao4Exercicios.c
 *
 *  Created on: 23 de set. de 2025
 *      Author: jonat
 */

void CincoPrimeiroMultiplos();
void RetornoMensagem(char* mensagem);
void CemMilMultiploDeCem();
void MaiorEMenorNumero();

#include <stdio.h>

int main(){
	//CincoPrimeiroMultiplos();
	//printf("\n");
	//CemMilMultiploDeCem();
	//printf("\n");
	MaiorEMenorNumero();
	return 0;
}

void MaiorEMenorNumero(){
	int maior = 0;
	int menor = 0;
	int numero = 0;

	for(int i = 1;i <= 3; i++){
		printf("Digite um numero:");
		fflush(stdout);
		scanf("%d", &numero);

		if(i == 1){
			maior = numero;
			menor = numero;

		}else{
			if(numero > maior){
				maior = numero;
			}

			if(numero < menor){
				menor = numero;
			}
		}

	}

	printf("Maior numero: %d\n", maior);
	printf("Menor numero: %d\n", menor);
}

void CemMilMultiploDeCem(){
	int inicio = 0;
	int final = 100000;
	int passo = 100;

	for(int i = inicio; i <= final;i += passo){
		printf("%d > ", i);
	}
}

void CincoPrimeiroMultiplos(){

	int inicio = 1;
	int final = 5;

	for(int i = inicio; i < final; i++){
		printf("%d > ", i * 3);
	}
}

void RetornoMensagem(char* mensagem){
	printf("%s", mensagem);
	mensagem = NULL;
}
