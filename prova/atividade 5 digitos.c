#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i = 0;
    int j = 0;
    int v = 0;
  
  struct dados
  {
    char nome[40];
	char email[40];
	char telefone[40];
  };

  struct dados cliente;
  
  printf("\n---------- Por favor informe seus dados -----------\n");
  
  printf("Nome: ");
  fflush(stdin);
  fgets(cliente.nome, 40, stdin);

  printf("Email: ");
  fflush(stdin);
  fgets(cliente.email, 40, stdin);
  
  printf("Telefone: ");
  fflush(stdin);
  fgets(cliente.telefone, 40, stdin);

  for(i = 0; cliente.nome[i] != '\0'; i++);
  for(j = 0; cliente.email[j] != '\0'; j++);
  for(v = 0; cliente.telefone[v] != '\0'; v++);
  
  printf("\n --------- Quantidade de digitos ---------\n");

  printf("Nome: %d digitos\n", --i);
  printf("Email: %d digitos\n", --j);
  printf("Nome: %d digitos\n", --v);
  
  system("PAUSE");
  return(0);
}