#include <stdio.h>
#include <string.h>

int main()
{
    char vetor[1002];
    int i, tamanho = 0, j, entrada, k, l;
    fgets(vetor, 10, stdin);
    sscanf(vetor, "%d", &entrada);
    for(k = 0; k < entrada; k++)
    {
        fgets(vetor, 1001, stdin);
        tamanho = strlen(vetor) - 1;
        for(i = 0; vetor[i] != '\0'; i++)
        {
            if(vetor[i] >= 'a' && vetor[i] <= 'z' || vetor[i] >= 'A' && vetor[i] <= 'Z')
            {
                vetor[i] += 3;
            }
        }
        vetor[i] = '\0';
        j = tamanho - 1;
        for(i = 0; i < tamanho/2; i++)
        {
            vetor[i] = vetor[i] + vetor[j];
            vetor[j] = vetor[i] - vetor[j];
            vetor[i] = vetor[i] - vetor[j];
            j--;
        }
        for(i = tamanho/2; i < tamanho; i++)
        {
            vetor[i] -= 1;
        }
        for(l = 0; vetor[l] != '\0'; l++)
        {
            printf("%c", vetor[l]);
        }
    }
    return 0;
}