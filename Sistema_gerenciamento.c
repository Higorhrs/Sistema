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

//Somando o taltal de custos sem adicional/
  total_gastos_fixos = agua + energia + telefone + internet + aluguel;
  
  //Criando um loop, enquanto o usuário digitar 1 ele pode adicionar um novo item/
  while(adicionar_custo_ou_nao==1){
  if(adicionar_custo_ou_nao == 1){
  printf("Qual o nome do custo adicional?(digite 1 palavra):\n");
  scanf("%s", &adicional);

  printf("Qual o custo %s?: \n", adicional); //Aqui no (%s) toda vez que o usuário digitar o nome do novo custo a variável assumirá o novo nome/;
  scanf("%f", &preco_adicional);
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  // C�lculo do lucro - Parte 6
float lucro_produtos;
  lucro_produtos = (precos_venda - precos_compra) * quantidades;
  lucro_total_produtos += lucro_produtos;

  printf("O lucro sobre a venda do produto %d �: R$ %.2f\n", i + 1, lucro_produtos);
}

float lucro_liquido = lucro_total_produtos - total_gastos_fixos;

printf("\nLucro total dos produtos vendidos: R$ %.2f\n", lucro_total_produtos);
printf("Gastos fixos: R$ %.2f\n", total_gastos_fixos);
printf("Lucro l�quido: R$ %.2f\n", lucro_liquido);
    
  return 0;
  }
