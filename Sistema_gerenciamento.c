#include <stdio.h>

int main(){
  //Olá vamos começar nosso projeto!!!/

  //Criando a parte de gastor fixos e variáveis/

  float agua, energia, telefone, internet, aluguel, total_gastos_fixos, preco_adicional;
  char adicional[50]= "  ";
  int adicionar_custo_ou_nao;

  printf("AGORA VAMOS CALCULAR SEUS GASTOS FIXOS E VARIAVEIS\n\n");
  printf("Qual o custo de sua agua?: \n"); scanf("%f", &agua);
  printf("Qual o custo de sua energia?: \n"); scanf("%f", &energia);
  printf("Qual o custo do seu telefone?: \n");scanf("%f",&telefone);
  printf("Qual o custo da sua internet?: \n");scanf("%f", &internet);
  printf("Qual o custo do seu aluguel?: \n");scanf("%f", &aluguel);

  //Condição para saber se o usuário deseja adicionar mais itens/
  printf("\nDeseja adicionar outro custo?\nDigite (1) para adicionar ou (2) para prosseguir:\n");
  scanf("%d", &adicionar_custo_ou_nao);
  adicionar_custo_ou_nao;
  
