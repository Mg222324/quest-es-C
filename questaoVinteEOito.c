#include <stdio.h>

int main() {
   int tgasto, opcao;
  printf("Qual o valor a ser pago?\n");
  scanf("%d", &tgasto);

  printf("1 - À vista\n");
  printf("2 - em duas vezes no cartão sem juros.\n");
  printf("3 - em quatro vezes no cartão com juros\n");
  scanf("%d",&opcao);

  if(opcao == 1){
    printf("você pagará R$ %d, o valor integral",tgasto);
  }
  if(opcao == 2){
float parcela;
    parcela = tgasto/2;
    printf("você pagará duas parcelas de R$ %.2f",parcela);
  }
  if(opcao == 3){
float parcelaj;
    parcelaj = (tgasto * 1.1)/4;
    printf("você pagará quatro parcelas de R$ %.2f",parcelaj);
  }
  return 0;
}
