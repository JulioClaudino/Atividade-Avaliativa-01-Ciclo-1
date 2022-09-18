#include <stdlib.h>
#include <time.h>

int main ()
{
    int contadorDaBomba;
    printf ("Daqui quanto tempo deseja que a bomba exploda? ");
    scanf("%d", &contadorDaBomba);

    while (contadorDaBomba > 0)
    {
        system ("cls");
        printf ("%d\n", contadorDaBomba);
        bomba (1);

        contadorDaBomba--;
    };
    
printf ("BOOM!\n");
system ("PAUSE");
return 0;
}

void bomba ( int contador )
{
clock_t segundos;
segundos = clock () + contador * CLK_TCK;
while (clock() < segundos) {}
}