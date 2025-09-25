#include <stdio.h>
#include <stdlib.h>

int *A = NULL;
int tamanhoVetor = 0;

void AtribuirValores();
void SomaSimples();
void ModificandoVetor();
void ExibirVetor();
void LerPosicoesMostrar();
void LimparMemoria();

int main(){

	//A
	AtribuirValores();
	//B
	SomaSimples();
	//C
	ModificandoVetor();
	//D
	ExibirVetor();
	//2
	LerPosicoesMostrar();

	LimparMemoria();
	return 0;
}

void LimparMemoria(){
	if(A != NULL){
		free(A);
		A = NULL;
	}
}

void AtribuirValores(){

	int novoTamanho = 6;

	A = (int *)malloc(novoTamanho * sizeof(int));

	if(A == NULL){
		printf("Erro ao alocar memoria AtribuirValores:A \n");
		return;
	}

	tamanhoVetor = novoTamanho;

	A[0] = 1;
	A[1] = 0;
	A[2] = 5;
	A[3] = -2;
	A[4] = -5;
	A[5] = 7;
}

void SomaSimples(){
	int soma = 0;
	soma = soma + A[0] + A[1] + A[5];
	printf("Soma: %d\n", soma);
}

void ModificandoVetor(){
	A[3] = 100;
}

void ExibirVetor(){

	for(int i = 0; i < tamanhoVetor; i++){
		printf("A[%d] = %d\n", i, A[i]);
	}
}


void LerPosicoesMostrar(){
	int posicao = 0;
	int valoresPares = 0;

	int *B = NULL;
	B = (int *)malloc(10 * sizeof(int));


	while(posicao < 10) {
		printf("Digite um valor para a posicao %d: ", posicao);
		fflush(stdout);
		scanf("%d", &B[posicao]);

		if(B[posicao] % 2 ==0){
			valoresPares++;
		}

		posicao++;
	}

	if(B != NULL){
		free(B);
		B = NULL;
	}


	printf("Quantidade de valores pares: %d\n", valoresPares);

}
