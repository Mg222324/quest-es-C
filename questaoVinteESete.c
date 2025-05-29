#include <stdio.h>

int main() {
  float valor;
   printf("valor: ");
   scanf("%f", &valor);

   if (valor < 100)
       valor *= 1.10;
   else
       valor *= 1.20;

   printf("valor inflacionado: %.2f\n", valor);
  
  return 0;
}
