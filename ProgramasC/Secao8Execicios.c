#include <stdio.h>
#include <ctype.h>

int MaiorDoVetor(int *vetor, int tamanho);
char CaractereMeMaiusculo(char* caractere);
void ImprimirPiramid(int numero);


int main(){

	int vetor[7] = {10, 20, 5, 7, 30, 15, 99};
	int tamanho = sizeof(vetor) / sizeof(vetor[0]);
	int maior = MaiorDoVetor(vetor, tamanho);
	printf("Maior numero do vetor: %d\n", maior);

	char caractere = 'b';
	printf("Caractere em maiusculo: %c\n", CaractereMeMaiusculo(&caractere));

	ImprimirPiramid(5);

	return 0;
}

int MaiorDoVetor(int *vetor, int tamanho){

	int maior = 0;

	for(int i = 0; i < tamanho; i++){
		if(vetor[i] > maior){
			maior = vetor[i];
		}
	}

	return maior;
}


char CaractereMeMaiusculo(char* caractere){
	return toupper(*caractere);
}

void ImprimirPiramid(int numero){
	for(int ln = 1; ln <= numero; ln++){
		for(int cl = 1; cl <= ln ; cl++){
			printf("!");
		}
		printf("\n");
	}
}







