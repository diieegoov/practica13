#include <iostream>
#include "banco.h"

Cuenta::Cuenta() {  // Constructor por defecto
  this->saldo_ = 50000;
}

Cuenta::Cuenta (int saldo) {
  saldo_ = saldo;
}

int Cuenta::Depositar(int suma) {
  int saldo_nuevo = saldo() + suma;
  return saldo_nuevo;
}
  
int Cuenta::Retirar(int resta) {
 int saldo_resta = saldo() - resta;
 return saldo_resta;
}

void Cuenta::PrintSaldo() {
 std::cout << "Saldo de la cuenta: " << saldo() << "€" << std::endl;
 std::cout << "¿Quiere depositar o retirar dinero? (D/R): ";
}