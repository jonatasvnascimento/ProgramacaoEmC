#include <stdio.h>

//Execicio da soma
int Soma(int a, int b, int c);
void RetornoMensagem(const char *mensagem);
void RetornoSoma();
//Execicio da somaAritimetica
void RetornoSomaAritimatica();
//Exercicio da loteria
float RegraDeTres(int totalAposta, int aposta);
float ValorApostaPremio(float premio, float porcentagemAposta1);
void RetornoLoteriaProporcional();
void LoteriaProporcional(float valorPremioAposta1, float valorPremioAposta2, float valorPremioAposta3);

int main() {

	RetornoSoma();
	RetornoSomaAritimatica();
	RetornoLoteriaProporcional();
	return 0;
}

//Execicio da soma
void RetornoSoma() {
	int somaQuadrados = Soma(2, 2, 2);
	char mensagem[50];
	snprintf(mensagem, sizeof(mensagem), "Soma dos quadrados: %d\n", somaQuadrados);
	RetornoMensagem(mensagem);
}

void RetornoMensagem(const char *mensagem) {
	printf("%s", mensagem);
	mensagem = NULL;
}

int Soma(int a, int b, int c) {
	return a * a + b * b + c * c;
}

//Execicio da somaAritimetica
int SomaAritimatica(int a, int b, int c, int d){
	return (a + b + c + d) / 4;
}

void RetornoSomaAritimatica() {
	int somaAritimetica = SomaAritimatica(2, 2, 2, 2);
	char mensagem[50];
	snprintf(mensagem, sizeof(mensagem), "Soma Aritimetica: %d\n", somaAritimetica);
	RetornoMensagem(mensagem);
}

//Exercicio da loteria
void RetornoLoteriaProporcional(){
	int aposta1 = 10;
	int aposta2 = 6;
	int aposta3 = 4;
	float premio = 10000;

	int totalAposta = aposta1 + aposta2 + aposta3;

	float porcentagemAposta1 = RegraDeTres(totalAposta, aposta1);
	float porcentagemAposta2 = RegraDeTres(totalAposta, aposta2);
	float porcentagemAposta3 = RegraDeTres(totalAposta, aposta3);

	float valorPremioAposta1 = ValorApostaPremio(premio, porcentagemAposta1);
	float valorPremioAposta2 = ValorApostaPremio(premio, porcentagemAposta2);
	float valorPremioAposta3 = ValorApostaPremio(premio, porcentagemAposta3);

	LoteriaProporcional(valorPremioAposta1, valorPremioAposta2, valorPremioAposta3);

}

void LoteriaProporcional(float valorPremioAposta1, float valorPremioAposta2, float valorPremioAposta3){
	char mensagem[50] = "";
	snprintf(mensagem, sizeof(mensagem), "Premio Aposta 1: R$ %.2f\n", valorPremioAposta1);
	RetornoMensagem(mensagem);

	snprintf(mensagem, sizeof(mensagem), "Premio Aposta 2: R$ %.2f\n", valorPremioAposta2);
	RetornoMensagem(mensagem);

	snprintf(mensagem, sizeof(mensagem), "Premio Aposta 3: R$ %.2f\n", valorPremioAposta3);
	RetornoMensagem(mensagem);
}

float ValorApostaPremio(float premio, float porcentagemAposta1){
	return premio * (porcentagemAposta1 / 100);
}

float RegraDeTres(int totalAposta, int aposta){
	float multiplicacaoCruzada = aposta * 100;
	float porcentagem = multiplicacaoCruzada / totalAposta;

	return porcentagem;
}











