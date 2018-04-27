#include <iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h> 
#include <vector>

using namespace std;

class Ambiente {
    vector< vector<int> > v;
    int tamX;
    int tamY;
    int NumeroDeAgentes;
  public:
    Ambiente();
    //Ambiente(int tamanho);
    Ambiente(int tamanhoX, int tamanhoY);
    void GetMatriz();
    void AddAgente();
    void DeleteAgente();
    void GetNumeroAgentes();
};
