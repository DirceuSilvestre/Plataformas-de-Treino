#include <stdio.h>
#include <math.h>

int main(void)
{
    int casos_teste, i, dias;
    double entrada;
    scanf("%d", &casos_teste);
    for (i = 0; i < casos_teste; i++)
    {
        dias = 0;
        scanf("%lf", &entrada);
        while(entrada > 1)
        {
            entrada /= 2.00;
            dias++;
        }
        printf("%d dias\n", dias);
    }
    return 0;
}