#include <stdio.h>

int main() {
    float f, c;

  printf("fale a temperatura em fahrenheit: ");
    scanf("%f", &f);

  c = (f - 32) * 5.0 / 9.0;
  printf("a temperatura em celcius é %.2f", c);

  return 0;
}
