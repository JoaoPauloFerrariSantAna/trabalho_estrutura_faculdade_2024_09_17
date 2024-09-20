/* Nome do aluno: João Paulo Ferrari Sant'Ana */
/* RA: 2007857 */

#include <stdio.h>

/*
	Função que verifica se parâmetro número é primo ou não.

	Entrada:
		int numero: um número que está dentro da matriz "matriz".
	Saida: a quantidade de números primos encontrados.
*/
int achar_primos(int numero) {
	int numeros_primos = 0;
	for(int i = 1; i < numero; i++) {
		int divisores = 0;
		for(int j = 1; j < i; j++) {
			if(i % j == 0) {
				divisores += 1;
			}
		}
		if(divisores <= 2) {
			numeros_primos += 1;
		}
	}
	return numeros_primos;
}

/*
	Função que procura o maior entre três números.

	Entrada:
		float n1: um número real.
		float n2: um número real.
		float n3: um número real.
	Saida: o maior número entre os três números.
*/
float achar_maior(float n1, float n2, float n3) {
    float maior = n1;
    if(n2 > maior) {
        maior = n2;
    }
    if(n3 > maior) {
        maior = n3;
    }
    return maior;
}

/*
	Função da qual enche uma matriz "mtz".

	Entrada: 3 parâmetros.
		int linhas: as linhas da matriz "mtz".
		int colunas: as colunas da matriz "mtz".
		int mtz[][]: uma matriz da qual tem como linhas o parâmetro "linhas",
		e colunas o parâmetro "colunas".
	Saida: Como matrizes são "ponteiros", as alterações feitas aqui,
	refletem na matriz de "exec_matriz": então não há necessidade de retornar.
*/
void encher_mtz(int linhas, int colunas, int mtz[linhas][colunas]) {
    for(int i = 0; i < linhas; i++) {
		for(int j = 0; j < colunas; j++) {
			printf("Digite um número na posição %dx%d: ", i, j);
			scanf("%d", &mtz[i][j]);
		}
	}
}

/*
	Função que calcula a tabuada de do número real "n" e a mostra.

	Entrada: 1 parâmetro.
		float n: um número real.
	Saida: Nenhuma.
*/
void calc_tabuada(float n) {
    for(float i = 0.0f; i <= 10; i++) {
        printf("%.2fx%.2f = %.2f\n", n, i, n * i);
    }
}

/*
    Função que calcula a potência "b" de um número "a".

    Entrada: 2 parâmetros.
		float a: um número real.
		float b: expoente do parâmetro "a".
	Saida:
		em caso de "b" ser igual a "0", a função retorna "1"
		pois "a⁰" é sempre igual a "1".
		em caso de "b" ser "1", a função deve retornar "a"
		pois "a¹ = a".
*/
float calc_expodencial(float a, float b) {
    float pot = 1.0f;
    if(b == 0.0f)						//Na matemática qualquer número elevado a 0 é igual a 1
        return 1.0f;
    if(b == 1.0f)						//Na matemática qualquer número elevado a 1 é igual a ele mesmo
        return a;
    for(float i = 0.0f; i < b; i++) {	//Realiza um laço de repetição aonde a vai ser multiplicado pelo valor que b receber
        pot = pot * a;
    }
    return pot;
}

/*
	Função da qual implementa a equação "F(x) = x^2 - 3 + x / 2":
	onde x é real e pode ser positivo ou negativo.

	Entrada: 1 parâmetro.
		float x: um número real positivo ou negativo.
	Saida:
		Retorna um outro número real resultante da equação.
*/
float calc_formula(float x) {
    return (x * x) - 3 + (x / 2);
}

/*
	Função da qual pergunta sobre três números reais e mostra o maior.

	Entrada: Nenhuma.
	Saida: Nenhuma.
*/
void exec_maior() {
    float num1 = 0;
    printf("Digite um número: ");
    scanf("%f", &num1);
    float num2 = 0;
    printf("Digite um segundo número: ");
    scanf("%f", &num2);
    float num3 = 0;
    printf("Digite um terceiro número: ");
    scanf("%f", &num3);
    printf("Entre os três números digitados, %.2f é o maior\n", achar_maior(num1, num2, num3));
}

/*
	Função que irá perguntar sobre um número "a" e seu expoente "b".

	Entrada: Nenhuma.
	Saida: Nenhuma.
*/
void exec_expodencial() {
    float a = 0.0f;
    printf("A = ");
    scanf("%f", &a);
    float b = 0.0f;
    printf("B = ");
    scanf("%f", &b);
    printf("%.2f^%.2f = %.2f\n", a, b, calc_expodencial(a, b));
}

/*
	Função da qual irá perguntar ao usuário sobre um número para
	que a calcular a tabuada.

	Entrada: Nenhum.
	Saida: Nenhum.
*/
void exec_tabuada() {
    float numero = 0.0f;
    printf("Tabuada de qual número você quer obter? ");
    scanf("%f", &numero);
    calc_tabuada(numero);
}

/*
	Função que irá iniciar com uma matriz de ordem 4x5 vazia
	e irá mostrar ao usuário o total de números primos que estão na matriz.

	Entrada: Nenhuma.
	Saida: Nenhuma.
*/
void exec_matriz() {
    int matriz[4][5];
	int total_primos = 0;
	encher_mtz(4, 5, matriz);
	for(int i = 0; i <= 3; i++) {
		for(int j = 0; j <= 4; j++) {
			total_primos += achar_primos(matriz[i][j]);
		}
	}
	printf("Nesta matriz 4x5 temos um total de %d números primos.\n", total_primos);
}

/*
	Função que irá perguntar um valor e calculará outro
	a partir da equação "F(x) = x^2 - 3 + x / 2", onde "x" é
	um número real.

	Entrada: Nenhuma.
	Saida: Nenhuma.
*/
void exec_formula() {
    float x = 0.0f;
    printf("Dê um valor para \"x\": ");
    scanf("%f", &x);
    printf("F(%.2f) = %.2f\n", x, calc_formula(x));
}

/*
    Função que mostra as que o usuário pode fazer.

    Entrada: Nenhuma.
    Saida: Nenhuma.
*/
void mostrar_opcoes() {
    printf("1. Calcular o maior número entre 3.\n");
    printf("2. Calcula a expodêncial.\n");
    printf("3. Calcular uma forma: F(x) = x^2 - 3 + x / 2.\n");
    printf("4. Calcular tabuada de um número.\n");
    printf("5. Achar os números pares dentro de uma matriz 4x5\n");
    printf("0. Sair.\n");
}

/*
    Função principal do programa "um.c".

    Entrada: Nenhuma.
    Saida: Nenhuma, mas programa é executado.
*/
void executar_app() {
    int op = 0;
    do {
        mostrar_opcoes();
        printf(">>> ");
        scanf("%d", &op);
        switch(op) {
            case 0:
            break;
            case 1:
                exec_maior();
            break;
            case 2:
                exec_expodencial();
            break;
            case 3:
                exec_formula();
            break;
            case 4:
                exec_tabuada();
            break;
            case 5:
                exec_matriz();
            break;
            default:
                printf("Opção \"%d\" desconhecida.", op);
            break;
        }
    } while(op != 0);
}

/*
    Função principal do programa "um.c"

    Entrada: Nada, mas irá executar a função "executar_app".
    Saida: um número inteiro.
*/
int main() {
    executar_app();
    return 0;
}

