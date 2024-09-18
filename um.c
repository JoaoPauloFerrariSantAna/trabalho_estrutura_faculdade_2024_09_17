/* Nome do aluno: João Paulo Ferrari Sant'Ana */
/* RA: 2007857 */

#include <stdio.h>

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

int achar_maior(int n1, int n2, int n3) {
    int maior = n1;

    if(n2 > maior) {
        maior = n2;
    }

    if(n3 > maior) {
        maior = n3;
    }

    return maior;
}

void exec_maior() {
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;

    printf("Digite um número: ");
    scanf("%d", &num1);
    printf("Digite um segundo número: ");
    scanf("%d", &num2);
    printf("Digite um terceiro número: ");
    scanf("%d", &num3);

    printf("Entre os três números digitados, %d é o maior\n", achar_maior(num1, num2, num3));
}

void calc_tabuada(float n) {
    for(float i = 0.0f; i <= 10; i++) {
        printf("%.2fx%.2f = %.2f\n", n, i, n * i);
    }
}

float calc_expodencial(float a, float b) {
    float resultado = 1.0f;

    for(float i = 0.0f; i < b; i++) {
        resultado *= a;
    }

    return resultado;
}

void exec_expodencial() {
    float a = 0.0f;
    printf("A = ");
    scanf("%f", &a);

    float b = 0.0f;
    printf("B = ");
    scanf("%f", &b);

    printf("%.2f^%.2f = %.2f\n", a, b, calc_expodencial(a, b));
}

void exec_tabuada() {
    float numero = 0.0f;
    printf("Tabuada de qual número você quer obter?");
    scanf("%f", &numero);

    calc_tabuada(numero);
}

void exec_matriz() {
    int matriz[4][5];
	int total_primos = 0;

    for(int i = 0; i <= 3; i++) {
		for(int j = 0; j <= 4; j++) {
			printf("Digite um número na posição %dx%d: ", ++i, ++j);

			scanf("%d", &matriz[i][j]);
		}
	}

	for(int i = 0; i <= 3; i++) {
		for(int j = 0; j <= 4; j++) {
			total_primos += achar_primos(matriz[i][j]);
		}
	}

	printf("Nesta matriz 4x5 temos um total de %d números primos.\n", total_primos);
}

float calc_formula(float x) {
    return (x * x) - 3 + (x / 2);
}

void exec_formula() {
    float x = 0.0f;

    printf("Dê um valor para \"x\": ");
    scanf("%f", &x);

    printf("F(%.2f) = %.2f\n", x, calc_formula(x));
}

int potencia(int a,int b){//Função para calcular potencia, recebe 2 parâmetros a e b
    int pot=1;//Declaração da variável pot que vai receber a função pow
    if(b==0)//Na matemática qualquer número elevado a 0 é igual a 1
    return 1;
    if(b==1)//Na matemática qualquer número elevado a 1 é igual a ele mesmo
        return a;
    for(int i=0; i<b; i++){//Realiza um laço de repetição aonde a vai ser multiplicado pelo valor que b receber
        pot= pot*a;
    }
    return pot;
}

void mostrar_opcoes() {
    printf("1. Calcular o maior número entre 3.\n");
    printf("2. Calcula a expodêncial.\n");
    printf("3. Calcular uma forma: F(x) = x^2 - 3 + x / 2.\n");
    printf("4. Calcular tabuada de um número.\n");
    printf("5. Achar os números pares dentro de uma matriz 4x5\n");
    printf("0. Sair.\n");
}

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

int main() {
    executar_app();
    return 0;
}

