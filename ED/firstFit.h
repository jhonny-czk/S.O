#ifndef FIRSTFIT_H
#define FIRSTFIT_H

class firstFit{
private:
int *tamBloco;
int *tamProcesso;
int m,n;

public:
    firstFit(int tamBloco[], int m,
            int tamProcesso[], int n);

    alocaProcesso(int *tamBloco, int m, int *tamProcesso, int n);
    {
        int alocacao[n]; //bloco alocado para processo
        memset(alocacao, -1, sizeof(alocacao)); // Nenhum bloco esta inicialmente 
                                            //alocado a nenhum processo 
    
        // escolhe um processo e encontra um bloco que encaixa
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (tamBloco[j] >= tamProcesso[i])
                {
                    // aloca o bloco j no processo [i] 
                    alocacao[i] = j;
    
                    // Reduz a memoria disponível no bloco
                    tamBloco[j] -= tamProcesso[i];
    
                    break;
                }
            }
        }
      
    }

    imprimeProcesso()
    {
      cout << "\nNo Processo.\tTamanho Processo\tNo do Bloco.\n";
      for (int i = 0; i < n; i++)
      {
          cout << " " << i+1 << "\t\t"
               << tamProcesso[i] << "\t\t";
          if (alocacao[i] != -1)
              cout << alocacao[i] + 1;
          else
              cout << "Não alocado";
          cout << endl;
      }
    }
}
#endif //FIRSTFIT_H
