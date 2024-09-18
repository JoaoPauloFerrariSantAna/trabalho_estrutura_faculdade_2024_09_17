#include <stdio.h>


int potencia(int a,int b){//Função para calcular potencia, recebe 2 parâmetros a e b
    int pot=1;//Declaração da variável pot que vai receber a função pow
    for(int i=0; i<b; i++){//Realiza um laço de repetição aonde a vai ser multiplicado pelo valor que b receber
        pot= pot*a;
    }
    return pot;
    if(b==0)//Na matemática qualquer número elevado a 0 é igual a 1
        return 1;
    if(b==1)//Na matemática qualquer número elevado a 1 é igual a ele mesmo
        return a;


}

int main(){//Função Principal para a realização da conta
    int x,y;//2 Parâmetros de tipo inteiro x,y para fazer a potencia

    scanf("%d", &x);
    scanf("%d", &y);
    printf("%d",potencia(x,y));//Imprime o resultado da função potencia
    return 0;
}
