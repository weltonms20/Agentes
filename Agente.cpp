#include <iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h> 
#include <vector>
#include "Ambiente.cpp"

using namespace std;

class Agente {
  public:
    Agente();
};

Agente::Agente(){
  cout << "\nCriou Agente - modelo\n";
}


int main () {
  Ambiente casa(5,5);
  casa.GetMatriz();
  casa.GetNumeroAgentes();
  return 0;
}