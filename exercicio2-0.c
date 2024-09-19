/*
Membros
Noah Vêri de Morais Franco Aleluia, 2014803
Leonardo Perin Andreozi, 1995746
Gustavo Rosa de Jesus, 2012734
João Paulo Ferrari Sant'Ana, 2007857
*/

#include <stdio.h>
#include <string.h>
#define MAXFUNCIONARIOS 100;

struct Cadastro {
    char primeiroNome[20];
    char sobrenome[20];
    char cpf[11];
    int idade;
    char sexo[10];
    float salario;
};

void exibirMenu(){
    printf("\n============================MENU============================\n");
    printf("1- Cadastrar um novo \n");
    printf("2- Buscar usuario pelo CPF\n");
    printf("3- Exibir lista com todos os funcionario\n");
    printf("0- Sair\n");
    printf("\n============================================================\n");
}

void cadastrarFuncionario(struct Cadastro funcionarios[], int numFuncionarios){
    if (*numFuncionarios >= MAXFUNCIONARIOS){
        printf("LIMITE DE FUNCIONARIOS ATINGIDO!")
        return;
    }
    
    struct Cadastro novoUsuario;

     printf("Digite o primeiro nome: ");
    scanf("%s", novoFuncionario.primeiroNome);

    printf("Digite o sobrenome: ");
    scanf("%s", novoFuncionario.sobrenome);

    printf("Digite o CPF (OBS: somente números): ");
    scanf("%s", novoFuncionario.cpf);

    printf("Digite a idade: ");
    scanf("%d", &novoFuncionario.idade);

    printf("Digite o sexo (OBS: masculino/feminino): ");
    scanf("%s", novoFuncionario.sexo);

    printf("Digite o salario: ");
    scanf("%f", &novoFuncionario.salario);

    funcionarios[*numFuncionarios] = novoFuncionario;
    (*numFuncionarios)++;

    printf("Funcionario cadastrado com sucesso!")
}

void exibirFuncionarios(struct Cadastro funcionarios[], int numFuncionarios){
    if (numFuncionarios == 0){
        printf("NENHUM FUNCIONARIO ENCONTRADO\n");
        return;
    }
    printf("Lista de funcionarios:\n");
    for (int i = 0; i < numFuncionarios; i++){
        printf("Funcionario %d:\n", i + 1);
        printf("Nome: %s %s\n", funcionarios[i].primeiroNome, funcionarios[i].sobrenome);
        printf("CPF: %s\n", funcionarios[i].cpf);
        printf("Idade: %d\n", funcionarios[i].idade);
        printf("Sexo: %s\n", funcionarios[i].sexo);
        printf("Salario: %.2f\n", funcionarios[i].salario);
        printf("\n");
    }
}

void buscarFuncionarioCPF(struct Cadastro funcionarios[], int numFuncionarios) {
    char cpfBuscado[11];

    printf("Digite o CPF do funcionario que deseja buscar: ");
    scanf("%s", cpfBuscado);

    for (int i = 0; i < numFuncionarios; i++) {
        if (strcmp(funcionarios[i].cpf, cpfBuscado) == 0) {
            // Se o CPF for encontrado, exibe as informações do funcionário
            printf("\nFuncionario encontrado:\n");
            printf("Nome: %s %s\n", funcionarios[i].primeiroNome, funcionarios[i].sobrenome);
            printf("CPF: %s\n", funcionarios[i].cpf);
            printf("Idade: %d\n", funcionarios[i].idade);
            printf("Sexo: %s\n", funcionarios[i].sexo);
            printf("Salario: %.2f\n", funcionarios[i].salario);
            printf("\n");
            return; 
        }
    }
     printf("Funcionario com CPF %s nao encontrado.\n", cpfBuscado);
}



int main() {
    struct Cadastro funcionarios[MAXFUNCIONARIOS];  // Array para armazenar os funcionários
    int numFuncionarios = 0;  // Contador de funcionários cadastrados
    int opcao;
    do {
        exibirMenu();
        printf("Digite uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                // cria novo cadastro
                cadastrarFuncionario(funcionarios, &numFuncionarios);
                break;
            case 2:
                // Buscar um cadastro ja feito pelo cpf
                printf("Buscar usuario pelo CPF...\n");
                break;
            case 3:
                // exibir lista de funcionarios cadastrados
                exibirFuncionarios(funcionarios, numFuncionarios);
                break;
            case 0:
            // sair do menu
                printf("Saindo...\n");
                break;
        
            default:
            // caso a pessoa nao escolha nenhuma das opções
                printf("OPCAO INVALIDA!\n");
        }
    } while (opcao != 0); // se uma opção for diferente ou igual a 0 vai sair

    return 0;
}