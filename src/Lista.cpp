#include <iostream>
#include <string>
#include "Lista.hpp"

using namespace std;


void
Lista::bootup ()
{
  vet[0].ID = 0;
  vet[1].ID = 1;
  vet[2].ID = 2;
  vet[3].ID = 3;
  vet[4].ID = 4;
  for (int i = 0; i < 5; i++)
    {
      vet[i].v = false;

    }
}

void
Lista::reserva (int ID)
{
  if (ID == 5){
      cout << "Saindo...";
  }
    
  else if (vet[0].v == true && vet[1].v == true && vet[2].v == true
      && vet[3].v == true && vet[4].v == true)
    cout << "Todas as quadras ja estao reservadas. Tente mais tarde. \n";

  else if (vet[ID].v == false)
    {
      cout << "Quadra " << ID << " reservada pela proxima hora com sucessso.\n";
      vet[ID].v = true;
    }

  else
    cout << "Quadra ja esta reservada, tente outra. \n";


}

