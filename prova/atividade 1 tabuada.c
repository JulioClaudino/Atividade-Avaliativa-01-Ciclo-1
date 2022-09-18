#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int numeroDeEntrada, tabuadaDaProva = 1, contador = 0, resultadoDaProva;

    printf("Informe um numero: ");
    scanf("%d", &numeroDeEntrada);

    while (numeroDeEntrada > 0 && tabuadaDaProva <= numeroDeEntrada)
    {
        resultadoDaProva = tabuadaDaProva * contador;

        printf("%d x %d = %d\n", tabuadaDaProva, contador, resultadoDaProva);

        contador++;

        if (contador == 11) {
            contador = 0;
            tabuadaDaProva++;
            printf("\n");
        };
    };

    system("PAUSE");
    return 0;
}
