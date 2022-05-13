#include <iostream>
#include <string>
#include "Lista.hpp"
using namespace std;
int
main ()
{
  Lista l;
  int id;
  id = 0; 

  l.bootup ();
  while(id != 5){
  cout << "Qual quadra deseja reservar? (de 0 a 4) \n";
  cout << "ou digite 5 para sair. \n";
  cin >> id;

  l.reserva (id);

}
  return 0;
}
