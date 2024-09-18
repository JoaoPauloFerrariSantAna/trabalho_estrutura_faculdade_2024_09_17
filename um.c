/* Nome do aluno: João Paulo Ferrari Sant'Ana */
/* RA: 2007857 */

#include <stdio.h>

int e_primo(int numero) {
    if(numero % 2 == 0) {
        return 1;
    }

    return 0;
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

void exec_tabuada() {
    float numero = 0.0f;
    printf("Tabuada de qual número você quer obter?");
    scanf("%f", &numero);

    calc_tabuada(numero);
}

void exec_matriz() {
    int matriz[4][5];
    int quantidade_primos = 0;

    for(int i = 0; i <= 3; i++) {
        for(int j = 0; j <= 4; j++) {
            printf("Digite um número na posição %dx%d: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);

            quantidade_primos += e_primo(matriz[i][j]); 
        }
    }

    printf("Nesta matriz 4x5 temos um total de %d números primos.\n", quantidade_primos);
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

void mostrar_opcoes() {
    printf("1. Calcular o maior número entre 3.\n");
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