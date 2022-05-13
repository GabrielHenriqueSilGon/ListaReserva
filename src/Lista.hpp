#ifndef __LISTA_HPP
#define __LISTA_HPP
#include <string>
using namespace std;

struct Valor
{
  int ID;
  bool v;
};


class Lista
{
public:
  Valor vet[5];
  void bootup ();
  int inicio;
  int final;
  void reserva (int ID);

};

#endif
