#include <stdio.h>

int main(void)
{
    long long int sold1, sold2, menos;
    while(scanf("%lld %lld", &sold1, &sold2) != EOF)
    {
        if (sold1 >= sold2)
        {
            menos = sold1 - sold2;
            printf("%lld\n", menos);
        }
        else if (sold2 > sold1)
        {
            menos = sold2 - sold1;
            printf("%lld\n", menos);
        }
        
    } 
    return 0;
}