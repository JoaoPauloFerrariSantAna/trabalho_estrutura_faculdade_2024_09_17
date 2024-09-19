/*
Membros
Noah Vêri de Morais Franco Aleluia, 2014803
João Paulo Ferrari Sant'Ana, 2007857
Leonardo Perin Andreozi, 1995746
Gustavo Rosa de Jesus, 2012734
*/

#include <stdio.h> //biblioteca padrao
#include <string.h> // biblioteca de strings
#define MAXFUNCIONARIOS 100 // uma definição de variavel constante

// struct para armazenar as informações dos funcionarios
struct Cadastro {
    char primeiroNome[20];
    char sobrenome[20];
    char cpf[11];
    int idade;
    char sexo[10];
    float salario;
};

//função para exibir o menu, n tem muito o que explicar '-'
void exibirMenu(){
    printf("\n============================MENU============================\n");
    printf("1- Cadastrar um novo \n");
    printf("2- Buscar usuario pelo CPF\n");
    printf("3- Exibir lista com todos os funcionario\n");
    printf("0- Sair\n");
    printf("\n============================================================\n");
}

// uma função que permite voce fazer o cadastro do funcionario, 
// adicionando os dados do funcionario para a lista de funcionario e colocando o contador {numFuncionarios}
void cadastrarFuncionario(struct Cadastro funcionarios[], int *numFuncionarios){
    if (*numFuncionarios >= MAXFUNCIONARIOS){
        printf("LIMITE DE FUNCIONARIOS ATINGIDO!");
        return;
    }
    
    // uma struct com o formulario e mandando os dados para serem armazenados
    struct Cadastro novoFuncionario;

    printf("\n===================FORMULARIO===================")

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
    printf("\n=========================================================")

// armezana o novo cadastroo na lista e coloca +1 para o numero de funcionarios, para nao passar dos 100 cadastros
    funcionarios[*numFuncionarios] = novoFuncionario;
    (*numFuncionarios)++;

    printf("Funcionario cadastrado com sucesso!");
}

// uma função que exibe todos os funcionarios cadastrados
void exibirFuncionarios(struct Cadastro funcionarios[], int numFuncionarios){
    
    // exibe a lsita de funcionarios
    printf("\n===================Lista de funcionarios:===================\n");
    for (int i = 0; i < numFuncionarios; i++){
        printf("Funcionario %d:\n", i + 1);
        printf("Nome: %s %s\n", funcionarios[i].primeiroNome, funcionarios[i].sobrenome);
        printf("CPF: %s\n", funcionarios[i].cpf);
        printf("Idade: %d\n", funcionarios[i].idade);
        printf("Sexo: %s\n", funcionarios[i].sexo);
        printf("Salario: %.2f\n", funcionarios[i].salario);
        printf("=========================================================\n");
    }
}

// uma função que busca o cadastro do funcionario pelo CPF, e foi criada uma variavel para receber o numero de cpf
void buscarCpf(struct Cadastro funcionarios[], int numFuncionarios) {
    char cpfBuscado[11];

    printf("Digite o CPF do funcionario que deseja buscar: ");
    scanf("%s", cpfBuscado);

// mostra o registro do funcionario, caso nao tenha um registro cadastrado nesse cpf, ele mostra o cpf e fala que nao foi encontrado
    for (int i = 0; i < numFuncionarios; i++) {
        if (strcmp(funcionarios[i].cpf, cpfBuscado) == 0) { // strcmp é uma função que compara duas strings
        
            printf("\n===================Funcionario encontrado:===================\n");
            printf("Nome: %s %s\n", funcionarios[i].primeiroNome, funcionarios[i].sobrenome);
            printf("CPF: %s\n", funcionarios[i].cpf);
            printf("Idade: %d\n", funcionarios[i].idade);
            printf("Sexo: %s\n", funcionarios[i].sexo);
            printf("Salario: %.2f\n", funcionarios[i].salario);
            printf("===============================================================\n");
            return; 
        }
    }
     printf("Funcionario com CPF %s nao encontrado.\n", cpfBuscado);
}



int main() {
    struct Cadastro funcionarios[MAXFUNCIONARIOS];  // Array q armazena os funcionarios
    int numFuncionarios = 0;  // Contador de funcionários
    int opcao; // variavel para armazenar a opcao escolhida
    // o do vai primeiro printar o menu para depois ver o que o usuario escolheu
    do {
        exibirMenu();
        printf("Digite uma opcao: ");
        scanf("%d", &opcao);
    // depois de exibir o menu, e dependendo da escolha, vai ir para uma função especifica
        switch (opcao) {
            case 1:
                // cria novo cadastro
                cadastrarFuncionario(funcionarios, &numFuncionarios);
                break;
            case 2:
                // Buscar um cadastro ja feito pelo cpf
                buscarCpf(funcionarios, numFuncionarios);
                break;
            case 3:
                // exibir lista de funcionarios cadastrados
                exibirFuncionarios(funcionarios, numFuncionarios);
                break;
            case 0:
            // sai do menu
                printf("Saindo...\n");
                break;
        
            default:
            // caso a pessoa nao escolha nenhuma das opções
                printf("OPCAO INVALIDA!\n");
        }
    } while (opcao != 0); // essa função faz com que fique exibindo o menu até escolher uma opção, que seja valida, no caso

    return 0;
}