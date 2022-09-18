#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char simOunao;
    int dia, mes, ano, a, b, c, d;

    printf("Essa pesquisa ira determinado a partir da sua data de nascimento o seu perfil, se deseja continuar digite 'S' ou 'N' para sair: ");
    scanf("%c",&simOunao);
    printf("\n");

    if (simOunao=='S' || simOunao=='s')
    {
        printf("Digite a data do seu nascimento, sem utilizar barras, apenas espacos Dia Mes Ano: ");
        scanf("%d %d %d", &dia, &mes, &ano);
        printf("\n");

        a = ((dia * 100 + mes) + ano);
        b = (a / 100) + (a % 100);
        c = b % 5;

        if(c % 5 == 0) {
        printf("Perfil: Timido\n\n");
        } else if(c % 5 == 1) {
        printf("Perfil: Sonhador\n\n");
        }else if(c % 5 == 2) {
        printf("Perfil: Paquerador\n\n");
        }else if(c % 5 == 3) {
        printf("Perfil: Atraente\n\n");
        }else if(c % 5 == 4) {
        printf("Perfil: Irresistivel\n\n");
        };
    };

    system("PAUSE");
    return 0;
};