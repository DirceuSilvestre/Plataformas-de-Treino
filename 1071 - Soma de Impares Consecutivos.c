#include <stdio.h>

int main(void)
{
    int a, b, resultado = 0, i;
    scanf("%d", &a);
    scanf("%d", &b);
    if(a > b)
    {
        for(i = b + 1; i < a; i++)
        {
            if(i%2 != 0)
            {
                resultado += i;
            }
        }
    }
    else if(b > a)
    {
        for(i = a + 1; i < b; i++)
        {
            if(i%2 != 0)
            {
                resultado += i;
            }
        }
    }
    printf("%d\n", resultado);
    return 0;
}