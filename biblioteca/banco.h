/**
   * Universidad de La Laguna
   * Escuela Superior de Ingeniería y Tecnología
   * Grado en Ingeniería Informática  
   * Informática Básica 2023-2024
   * @file P57548.cc
   * @author Diego Vegas Acosta alu0101651361@ull.edu.es
   * @date Oct 10 2023    
   * @brief The program sums two numbers
   * @bug There are no known bugs
   * @see https://jutge.org/problems/P57548
   */


#ifndef BANCO_H
#define BANCO_H

class Cuenta {
 public:
  Cuenta(int); //Constructor
  Cuenta(); //Constructor por defecto
  // 1 Getter
  int saldo() const { return saldo_; }
  int Depositar(int);
  int Retirar(int);
  void PrintSaldo();
 private:
  int saldo_;
};

/**
Obtener el número de cuenta.
Obtener el nombre del titular de la cuenta.
Obtener el saldo disponible en la cuenta.
Depositar una cantidad dada en la cuenta.
Retirar una cantidad dada de la cuenta.
*/
#endif