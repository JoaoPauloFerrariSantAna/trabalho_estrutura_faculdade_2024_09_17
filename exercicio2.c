#include <stdio.h>
#include <string.h>

typedef struct {
    char primeiroNome[20];
    char sobrenome[20];
    char cpf[11];
    int idade;
    char sexo[10];
    float salario;
}Funcionario;

Funcionario* buscarFuncionario(Funcionario funcionaio[], int quantidade, const char* cpfBuscado){
    for(int i = 0; i<quantidade; i++){
        if(strcmp(funcionaio[i].cpf, cpfBuscado) ==0){
            return &funcionaio[i]; //vai retornar o ponteiro para o funcionario que tiver o cpf requerido
        }
    }
    return NULL;
}


void exibirMenu(){
    printf("\n============================MENU============================\n");
    printf("1- Cadastrar um novo \n");
    printf("2- Buscar usuario pelo CPF\n");
    printf("3- Exibir lista com todos os funcionario\n");
    printf("0- Sair\n");
    printf("\n============================================================\n");
}
void cadastrarFuncionario(){
    Funcionario novoFuncionario;
    for(int i=0;i<5;i++){
        printf("Digite o primeiro nome: ");
        scanf(" %s", novoFuncionario.primeiroNome);  //
        printf("%s",novoFuncionario.sobrenome);
        printf("Digite a idade: ");
        scanf(" %d", novoFuncionario.idade); //
        printf("Digite o seu sexo: ");
        scanf(" %s", novoFuncionario.sexo);
        printf("Digite o CPF: ");
        scanf(" %s", novoFuncionario.cpf);
        printf("Digite o salario: ");
        scanf("%f", &novoFuncionario.salario);
    }   
    printf("%s", funcionario.nome)
}
void executarApp(){
    int operacao = 0;
    Funcionario funcionario[100];
    int quantidadefuncionaio = 0;
    
    do{
        exibirMenu();
        printf(">>> ");
        scanf("%d", &operacao);
        switch(operacao){
            case 0:
                break;
            case 1:
                cadastrarFuncionario();
            break;
        }
    }
}
            /*case 2:
                char cpfBuscado[11];
                printf("Digite o CPF para buscar: (obs: digite apenas os numeros)\n");
                scanf("%s",cpfBuscado);

                Funcionario* funcionarioEncontrado = buscarFuncionario(funcionaio, quantidadefuncionaio, cpfBuscado);
                if(funcionarioEncontrado != NULL){
                    printf("Funcionario encontrado! Aqui esta as seguintes informacoes:");
                    printf("Nome: %s\n", funcionarioEncontrado.nome);
                    printf("Idade: %d\n", funcionarioEncontrado.idade);
                    printf("Sexo: %s\n", funcionarioEncontrado.sexo);
                    printf("CPF: %s\n", funcionarioEncontrado.cpf);
                    printf("Salario: %.2f\n", funcionarioEncontrado.salario);
                }else{
                    printf("Funcionario com CPF %s nao foi encontrado. Por favor insira um CPF VALIDO\n,", cpfBuscado);
                }
                break;
        
            case 3: 
                if (quantidadefuncionaio > 0){
                    printf("Lista dos funcionaio cadastrados:\n");
                    for(int i = 0; i<quantidadefuncionaio; i++){
                        printf("%d. Nome: %s\n, CPF: %s\n, Idade: %d\n, Sexo: %s\n, Salario: %.2f\n", i+1, funcionaio[i].nome, funcionaio[i].cpf, funcionaio[i].idade, funcionaio[i].sexo, funcionaio[i].salario);

                    }
            }else{
                printf("Nenhum funcionario foi cadastrado!\n");
            }
            break;
            defeault:
                printf("OPCAO INVALIDA!");
           
        }
    } while(operacao != 0);
}*/

void main() {
    executarApp();
}