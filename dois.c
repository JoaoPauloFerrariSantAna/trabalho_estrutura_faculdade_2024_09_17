#include <stdio.h>
#include <math.h> //Biblioteca que permite fazer cálculos de matemática

int potencia(int a,int b){//Função para calcular potencia, recebe 2 parâmetros a e b
    int pot;//Declaração da variável pot que vai receber a função pow
    pot = pow(a,b);//pow é uma função que recebe 2 valores, uma base e um expoente respectivamente
    return pot;


}

int main(){//Função Principal para a realização da conta
    int x,y;//2 Parâmetros de tipo inteiro x,y para fazer a potencia

    scanf("%d", &x);
    scanf("%d", &y);
    printf("%d",potencia(x,y));//Imprime o resultado da função potencia
    return 0;
}
