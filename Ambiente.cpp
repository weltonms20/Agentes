#include <iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h> 
#include <vector>

using namespace std;

Ambiente::Ambiente(){
  this->tamX = 10;
  this->tamY = 10;
  this->NumeroDeAgentes = 0;
  this->v = vector< vector<int> >(10,vector<int>(10));
  srand (time(NULL));
  for (int i = 0; i < 10 ; ++i)
  {
    for (int j = 0; j < 10; ++j)
    {
      this->v[i][j] = rand()%2;
    }
  }
  cout << "\nCriou Ambiente - modelo\n";
}
Ambiente::Ambiente(int tamanhoX, int tamanhoY){
  this->tamX = tamanhoX;
  this->tamY = tamanhoY;
  this->NumeroDeAgentes = 0;
  this->v = vector< vector<int> >(tamanhoX,vector<int>(tamanhoY));
  srand (time(NULL));
  for (int i = 0; i < tamanhoX ; ++i)
  {
    for (int j = 0; j < tamanhoY; ++j)
    {
      this->v[i][j] = rand()%2;
    }
  }
  cout << "\nCriou Ambiente - modelo\n";
}


void Ambiente::GetMatriz(){

  for (int i = 0; i < this->tamX ; ++i)
  {
    cout << "\n";
    for (int j = 0; j < this->tamY; ++j)
    {
      cout << " " << this->v[i][j] << " ";
    }
  }
}

void Ambiente::AddAgente(){
  this->NumeroDeAgentes++;
}
void Ambiente::DeleteAgente(){
  this->NumeroDeAgentes--;
}
void Ambiente::GetNumeroAgentes(){
  cout << "\n numero de agentes  = " << this->NumeroDeAgentes << endl;
}





int main () {
  Ambiente casa(5,5);
  casa.GetMatriz();
  casa.GetNumeroAgentes();
  return 0;
}