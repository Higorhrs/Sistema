#include <stdio.h>

int main() {
    // Olá, vamos começar nosso projeto!

    // Criando a parte de gastos fixos e variáveis
    float agua, energia, telefone, internet, aluguel, total_gastos_fixos = 0, preco_adicional;
    char adicional[50] = "";
    int adicionar_custo_ou_nao;

    printf("AGORA VAMOS CALCULAR SEUS GASTOS FIXOS E VARIAVEIS\n\n");
    printf("Qual o custo de sua agua?: ");
    scanf("%f", &agua);
    printf("Qual o custo de sua energia?: ");
    scanf("%f", &energia);
    printf("Qual o custo do seu telefone?: ");
    scanf("%f", &telefone);
    printf("Qual o custo da sua internet?: ");
    scanf("%f", &internet);
    printf("Qual o custo do seu aluguel?: ");
    scanf("%f", &aluguel);

    // Somando o total de custos sem adicional
    total_gastos_fixos = agua + energia + telefone + internet + aluguel;

    // Condição para saber se o usuário deseja adicionar mais itens
    printf("\nDeseja adicionar outro custo?\nDigite (1) para adicionar ou (2) para prosseguir:\n");
    scanf("%d", &adicionar_custo_ou_nao);

    // Criando um loop, enquanto o usuário digitar 1 ele pode adicionar um novo item
    while (adicionar_custo_ou_nao == 1) {
        printf("Qual o nome do custo adicional?(digite 1 palavra): ");
        scanf("%s", adicional);

        printf("Qual o custo %s?: ", adicional);
        scanf("%f", &preco_adicional);

        // Somando custos adicionais
        total_gastos_fixos += preco_adicional;

        printf("\nDeseja adicionar outro custo?\nDigite (1) para adicionar ou (2) para prosseguir:\n");
        scanf("%d", &adicionar_custo_ou_nao);
    }

    // Imprimindo para o usuário o valor total de gastos fixos
    printf("\n\nTotal de gastos fixos R$: %.2f\n", total_gastos_fixos);

    // Quantos funcionários tem a empresa
    int numFuncionarios;
    printf("Quantos funcionarios a empresa possui?(inclui voce proprio): ");
    scanf("%d", &numFuncionarios);

    // Solicita o numero de salarios da empresa
    float salarios[numFuncionarios];
    float somaSalarios = 0.0;

    // Soma de cada salario
    for (int i = 0; i < numFuncionarios; i++) {
        printf("Digite o salario do funcionario %d: ", i + 1);
        scanf("%f", &salarios[i]);
        somaSalarios += salarios[i]; // Acumula o salário na soma total
    }

    // Impressão dos salários dos funcionários
    printf("\nSalarios dos funcionarios:\n");
    for (int i = 0; i < numFuncionarios; i++) {
        printf("Funcionario %d: R$%.2f\n", i + 1, salarios[i]);
    }

    // Impressão da soma dos salários
    printf("\nSoma de todos os salarios: R$%.2f\n", somaSalarios);

    // Soma dos salários com gastos fixos
    total_gastos_fixos += somaSalarios;
    printf("Total de gastos ate agora e de R$: %.2f\n", total_gastos_fixos);

    // Solicitar informações sobre os produtos
    int total_produtos;
    float precos_venda, precos_compra;
    int quantidades;

    printf("\nQuantos produtos diferentes voce tem?: ");
    scanf("%d", &total_produtos);

    float lucro_total_produtos = 0.0;

    for (int i = 0; i < total_produtos; i++) {
        printf("\nQual o preco de compra do produto %d?: ", i + 1);
        scanf("%f", &precos_compra);
        printf("\nQual o preco de venda do produto %d?: ", i + 1);
        scanf("%f", &precos_venda);
        printf("Qual a quantidade vendida do produto %d?: ", i + 1);
        scanf("%d", &quantidades);

        // Cálculo do lucro
        float lucro_produtos = (precos_venda - precos_compra) * quantidades;
        lucro_total_produtos += lucro_produtos;

        printf("O lucro sobre a venda do produto %d e: R$ %.2f\n", i + 1, lucro_produtos);
    }

    float lucro_liquido = lucro_total_produtos - total_gastos_fixos;

    printf("\nLucro total dos produtos vendidos: R$ %.2f\n", lucro_total_produtos);
    printf("Gastos fixos: R$ %.2f\n", total_gastos_fixos);
    printf("Lucro liquido: R$ %.2f\n", lucro_liquido);

    return 0;
}
