#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct funcionario {            //estrutura de funcionarios
    char nome[50], cargo[50];
    float salario;
    int identificador;
};

void ler(struct funcionario **f, int quant_funcionarios) {  //função para ler os dados dos funcionarios
    int i;

    for (i = 0; i < quant_funcionarios; i++) {

        printf("\nDigite o nome do funcionario %d: ", i + 1);
        scanf(" %[^\n]s", f[i] -> nome);

        printf("\nDigite o salario desse funcionario: ");
        scanf("%f", &f[i] -> salario);

        printf("\nDigite o seu cargo: ");
        scanf(" %[^\n]s", f[i] -> cargo);
        
        printf("\nDigite o seu identificador: ");
        scanf("%d", &f[i] -> identificador);

    }

}

void imprime(struct funcionario **f, int quant_funcionarios) {  //função para imprimir os dados dos funcionarios
    int i;

    for(i = 0; i < quant_funcionarios; i++) {  //for usado para imprimir cada dado de cada funcionario
        
        printf("\n-------------------------\n");
        printf("Funcionario num.%d", i + 1);
        printf("\nNome: %s", f[i] -> nome);
        printf("\nCargo: %s", f[i] -> cargo);
        printf("\nSalario: R$%.2f", f[i] -> salario);
        printf("\nIdentificador: %d", f[i] -> identificador);
    }

}

void maior(struct funcionario **f, int quant_funcionarios) {  //função usada para saber qual é o funcionario com o maior e menor salario e seu cargo
    int i;
    char maior_cargo[50], menor_cargo[50];
    float maior_salario, menor_salario;

    for(i = 0; i < quant_funcionarios; i++) {

        if(i == 0) {                               //com essa condição, minhas variáveis de maior e meonr iram receber no começo do laço
                                                   //de repetição os cargos e salarios apenas uma vez, depois meu laço irá atualizar os valores
            strcpy(maior_cargo, f[i] -> cargo);   
            strcpy(menor_cargo, f[i] -> cargo);
            maior_salario = f[i] -> salario;
            menor_salario = f[i] -> salario;

        }

        if(maior_salario < f[i] -> salario) {     //condiçaõ para saber se meu maior salario é menor que o salario que está sendo comparado atualmente

            maior_salario = f[i] -> salario;
            strcpy(maior_cargo, f[i] -> cargo);

        }

        if(menor_salario > f[i] -> salario) {     //condiçaõ para saber se meu menor salario é maior que o salario que está sendo comparado atualmente

            menor_salario = f[i] -> salario;
            strcpy(menor_cargo, f[i] -> cargo);

        }

    }

    printf("\n\nO cargo com maior salario e: %s", maior_cargo);
    printf("\nE seu salario e: R$%.2f", maior_salario);
    printf("\n\nO cargo com o menor salario e: %s", menor_cargo);
    printf("\nE seu salario e: R$%.2f", menor_salario);
}

void altera_salario(struct funcionario **f) {    //função para alterar o salario de um funcionario específico
    int num_f;

    printf("\nDigite o numero do funcionario que deseja alterar o salario: ");
    scanf("%d", &num_f);
    printf("\nDigite o novo salario do funcionario num.%d: ", num_f);
    scanf("%f", &f[num_f - 1] -> salario);       //estou atribuindo o novo valor do funcionario usando minha variável (num_f - 1)
}                                                //o (-1) serve para acessar o elemento certo do funcionario

int main(void) {
    char escolha;
    int i;

    struct funcionario **f = (struct funcionario ** )malloc(sizeof(struct funcionario*));   //alocando dinamicamente minha variável f

    int quant_funcionarios;

    printf("Digite a quantidade de funcionario: ");

    scanf("%d", &quant_funcionarios);

    for(i = 0; i < quant_funcionarios; i++) {

        f[i] = (struct funcionario *) malloc(quant_funcionarios * sizeof(struct funcionario));
        
    }

    ler(f, quant_funcionarios);

    imprime(f, quant_funcionarios);

    printf("\n\nDeseja alterar o salario de algum funcionario?\nDigite 's' para sim, e 'n' para nao: ");
    scanf(" %c", &escolha);

    if(escolha == 's') {
        altera_salario(f);
        imprime(f, quant_funcionarios);
    }

        maior(f, quant_funcionarios);
        printf("\n\nFim do programa!");

    for(i = 0; i < quant_funcionarios; i++) { //liberando o espaço da minha memória

        free(f[i]);
        
    }

    free(f);

    printf("\n");

    return (0);
}