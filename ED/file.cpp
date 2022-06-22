#include <iostream>
#include <queue>

using namespace std;

//FIFO
void fifo(int qtdPagMemo, int &sequenciaAlocPg, int qtdPagRefer);

//LRU
void lru(int qtdPagMemo, int &sequenciaAlocPg, int qtdPagRefer);

int main()
{
    int qtdPagMemo = 0;
    int qtdPagRefer = 0;
    int sequenciaAlocPg[qtdPagRefer];
    int selectAlgo;//chama func fifo ou lru
    std::cout << "===SIMULADOR DE ALOCACAO DE PROCESSOS===" << std::endl;
    std::cout << "Digite o tamanho da memoria (quantidade de paginas de memoria)" << std::endl;
    std::cin >> qtdPagMemo;
    std::cout << "Digite a quantidade de paginas para serem lidas" << std::endl;
    std::cin >> qtdPagRefer;
    for(int i=0; i< qtdPagRefer; i++)
    {
        std::cout << "Digite o "  << i+1 << "o numero da sequencia de paginas para serem lidas" << std::endl;
        std::cin >> sequenciaAlocPg[i];
    }

    cout << "Selecione o algoritmo de alocação" << endl;
    cout << "FIFO = 1 | LRU = 2 | Sair = 0" << endl;
    cout << endl;
    cin >> selectAlgo;//chama func fifo ou lru
    switch (selectAlgo)
    {
        case 0:
            cout <<"Saindo..." << endl;
            break;
        case 1:
            fifo(qtdPagMemo, *sequenciaAlocPg, qtdPagRefer);
            break;

        case 2:
            lru(qtdPagMemo, *sequenciaAlocPg, qtdPagRefer);
            break;

        default:
            cout <<"Numero invalido" << endl;
            break;
    }

    return 0;
}

//FIFO
void fifo(int qtdPagMemo, int &sequenciaAlocPg, int qtdPagRefer)
{
    queue<int> fila;
    int pageFault = 0;
    int tamFila = qtdPagRefer;
    //cout << "Tamanho fila: " << tamFila << endl;

    for(int i=0; i<tamFila; i++)
    {
        fila.push(sequenciaAlocPg);
        cout << "Fila:" << fila.front() << endl;
        
    }

    cout<<"oi" << endl;
}


//LRU
void lru(int qtdPagMemo, int &sequenciaAlocPg, int qtdPagRefer)
{
    cout<<"oi2" << endl;
}
