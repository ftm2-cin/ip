#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

typedef struct
{
    float TAtend; // tempo de atendimento do cliente
    int Qitens;   // qtd dos produtos
} Cliente;

typedef struct
{
    Cliente fila[20000];  // pessoas na fila do caixa
    int PessoasEsperando; // pessoas que ainda não foram atendidas
    int PessoasAtendidas; // pessoas que já foram atendidas
} CaixaG;

typedef struct
{
    int PessoasAtendidas;
    int ocupado;      // assume valores 0 ou 1 dependendo se o caixa está ocupado
    Cliente atual[4]; // cliente sendo atendido
} CaixaP;

int main()
{
    float i;
    int j, cont_clientes = 0, cont_fila = 0, cont_caixap = 0, cont_caixag = 0, caixag_davez = 0, filadavez = 0, cont = 0, pessoas_atendidasp = 0;
    Cliente clientes[200000];
    CaixaG caixag[4];        // QUANTIDADE DE CAIXAS GRANDES = 5
    CaixaP caixasp[4];       // QUANTIDADE DE CAIXAS PEQUENOS = 5
    int fila_caixap[100000]; // QUANTIDADE DE PESSOAS NA FILA DO CAIXA PEQUENO

    for (i = 0; i <= 24; i += 0.1)
    {                                                // CONTADOR DE HORAS
        srand((unsigned)time(NULL));                 // Inicializa o gerador de números aleatórios
        float num_sorteado = (rand() % 101) / 100.0; // sorteia um número entre 0 e 1

        if (num_sorteado >= 0.5) // SE CHEGAR CLIENTE
        {
            int itens = rand() % 40 + 1;                      // sorteia um inteiro entre 1 e 40
            float tempo_atendimento = (rand() % 101) / 100.0; // sorteia um número entre 0 e 1

            // CADASTRO DO CLIENTE(ITENS E TEMPO DE ATENDIMENTO)
            clientes[cont_clientes].Qitens = itens;
            clientes[cont_clientes].TAtend = tempo_atendimento;

            // ATRIBUIÇÃO DE CLIENTES NO CAIXA GRANDE
            if (itens > 20)
            {
                caixag[caixag_davez].fila[filadavez] = clientes[cont_clientes];
                caixag_davez++;
                // AQUI REINICIA E COMEÇA A BOTAR DENOVO
                if (caixag_davez == 4)
                {
                    caixag_davez = 0;
                    filadavez++;
                    caixag[j].PessoasEsperando++;
                }
            }
            // ATRIBUIÇÃO DE PESSOAS NA FILA DOS CAIXAS PEQUENOS
            else if (itens <= 20)
            {
                fila_caixap[cont_caixap] = cont_clientes;
                cont_caixap++;
            }
            cont_clientes++;
        }
        // MECANISMO DE ANDAMENTO DOS CAIXAS GRANDES
        for (j = 0; j < 4; j++)
        {
            // AQUI EU PEGO A PESSOA QUE ESTÁ NA VEZ DE SER ATENDIDA E SUBTRAIO 0.1 SEG DO SEU TEMPO
            caixag[j].fila[filadavez].TAtend = caixag[j].fila[filadavez].TAtend - 0.1;
            // SE ELA TIVER O TEMPO MENOR QUE OPU IGUAL A 0 EU AUMENTO O NUMERO DE PESSOA ATENTIDAS E BOTO A PROXIMA
            if (caixag[j].fila[filadavez].TAtend <= 0)
            {
                caixag[j].PessoasAtendidas++;
                caixag[j].fila[filadavez] = caixag[j].fila[filadavez + 1];
            }
        }

        // MECANISMO DOS CAIXAS PEQUENOS
        for (int c = 0; c < 4; c++)
        {
            for (j = 0 + cont; j < 5 + cont; j++)
            {
                caixasp[c].atual[j].TAtend = caixasp[c].atual[j].TAtend - 0.1;
                if (caixasp[c].atual[j].TAtend <= 0)
                {
                    pessoas_atendidasp++;
                    caixasp[c].ocupado = 0;
                }
            }
        }
    }
    //RESULTADO FINAL
    if (pessoas_atendidasp > caixag[0].PessoasAtendidas + caixag[1].PessoasAtendidas + caixag[2].PessoasAtendidas + caixag[3].PessoasAtendidas + caixag[4].PessoasAtendidas)
    {
        printf("FILA INDIVIDUAL\n");
    }
    else
        printf("FILA COLETIVA\n");
    return 0;
}