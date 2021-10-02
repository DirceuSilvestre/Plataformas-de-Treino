#include <stdio.h>

int main(void)
{
    int a, b, c, d, e, f, g, maior = 0, maiori, outro, i, j = 0, k;
    char binario[100];
    for(i = 0; i < 4; i++)
    {
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g);
        outro = a + b + c + d + e + f + g;
        if(outro > maior){maior = outro;}
    }
    maiori = maior;
    while(maior>1)
    {
        binario[j] = maior%2;
        maior /= 2;
        j++;
    }
    binario[j] = maior;
    printf("%d = ", maiori);
    for(k = j; k >= 0; k--)
    {
        printf("%d", binario[k]);
        if(k == 0){printf("\n");}
    }
    return 0;
}