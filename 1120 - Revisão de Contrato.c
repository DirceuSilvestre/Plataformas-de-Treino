#include <stdio.h>
#include <string.h>

int main()
{
    int numero, i, j, k;
    long long int resposta;
    char  letra[1000];
    while(1)
    {
        scanf("%d %s", &numero, letra);
        if(numero == 0 && letra[0] == '0'){break;}
        for(i = 0; letra[i] != '\0';)
        {
            if(numero == letra[i] - '0')
            {
                for(j = i; j < strlen(letra); j++)
                {
                    letra[j] = letra[j + 1];
                }
            }
            else
            {
                i++;
            }
        }
        if(letra[0] == '\0')
        {
            printf("0");
        }
        else if(strlen(letra) > 14)
        {      
            for(k = 0; letra[k] != '\0'; k++)
            {
                printf("%d", letra[k] - '0');
            }
        }
        else
        {
            sscanf(letra, "%lld", &resposta);
            printf("%lld", resposta);  
        }
        printf("\n");
    }
    return 0;
}