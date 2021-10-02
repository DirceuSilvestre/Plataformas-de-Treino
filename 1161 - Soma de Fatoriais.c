#include <stdio.h>

long long int fat(long long int fatorial)
{
    if (fatorial < 2)
    {
        return 1;
    }
    else
    {
        return (fatorial * fat(fatorial - 1));
    }
}

int main(void)
{
    long long int soma, fatorial1, fatorial2;
    while( scanf("%lld %lld", &fatorial1, &fatorial2) != EOF)
    {
        soma = fat(fatorial1) + fat(fatorial2);
        printf("%lld\n", soma);
    }
    
    return 0;
}