#include <stdio.h>

int verificarNumeroImparOuPar(int numero)
{
  if (numero % 2 == 0)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

int main()
{
  int numeroInicial, numeroFinal, numerosPares = 0;

  printf("Digite o número inicial: ");
  scanf("%d", &numeroInicial);

  printf("Digite o número final: ");
  scanf("%d", &numeroFinal);

  for (int i = numeroInicial; i <= numeroFinal; i++)
  {
    if (verificarNumeroImparOuPar(i))
    {
      printf("%d é um número par\n", i);
      numerosPares++;
    }
    else
    {
      printf("%d é um número ímpar\n", i);
    }
  }

  printf("Foram encontrados %d números pares entre %d e %d \n", numerosPares, numeroInicial, numeroFinal);

  return 0;
}