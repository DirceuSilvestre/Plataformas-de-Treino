#include <stdio.h>
#include <math.h>

int main(void)
{
    unsigned long long int kilo;
    int entrada, casos_teste, i;
    scanf("%d", &casos_teste);
    for (i = 0; i < casos_teste; i++)
    {
        scanf("%d", &entrada);
        kilo = (pow(2,entrada)/12000);
        printf("%lld kg\n", kilo);
    }
    return 0;
}