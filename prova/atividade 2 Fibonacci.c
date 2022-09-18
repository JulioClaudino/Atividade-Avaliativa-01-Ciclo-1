#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int numeroDeEntrada, contador = 0, valorAnterior = 0, somador = 1, resultado = 1;

    printf("Informe um numero: ");
    scanf("%d", &numeroDeEntrada);

    while (contador < numeroDeEntrada)
    {
        printf("%d", resultado);
        
        resultado = somador + valorAnterior;
        valorAnterior = somador;
        somador = resultado;
        contador++;
    };

    printf("\n");
    system("PAUSE");

    return 0;
}