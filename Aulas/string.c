#include <stdio.h>
#include <string.h>

int main()
{
    char frase [200] = "para passar", palavra[30] = "passar", encontrei;
    for (int i = 0; i < strlen(frase) && !encontrei; i++)
    {
        if (frase[i] == palavra[0])
        {
            encontrei = 1;
            for (int j = 1; j < strlen(palavra) && encontrei; j++)
            {
                if (frase[i + j] != palavra[j])
                {
                    encontrei = 0;
                }   
            }
            if (encontrei == 1)
            {
                printf("Encontrei na posição %d\n", i);
            }
        }   
    }
    return 0;
}