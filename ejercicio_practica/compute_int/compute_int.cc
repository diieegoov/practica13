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

#include "compute_int.h"

ComputeInt::ComputeInt(int numero_1, int numero_2) { //Inicializador
  numero_1_ = numero_1;
  numero_2_ = numero_2;
}

std::ostream& operator<<(std::ostream& out, const ComputeInt& objeto) {
  out << "\n";
  out << objeto.numero_1() << "\n";
  out << objeto.numero_2() << "\n";
  return out;
}

ComputeInt ComputeInt::Factorial() { //5! = 1 x 2 x 3 x 4 x 5 = 120
  int factorial_1{1};
  for (int i = 1; i <= numero_1(); i++) {
    factorial_1 *= i;
  }
  int factorial_2{1};
  for (int j = 1; j <= numero_2_; j++) {
    factorial_2 *= j;
  }
  ComputeInt factorial(factorial_1, factorial_2);
  return factorial;
}

ComputeInt ComputeInt::SumSerie() {
  int sumatorio_1{0};
  for (int i = 1; i <= numero_1_; i++) {
    sumatorio_1 += i;
  }
  int sumatorio_2{0};
  for (int j = 1; j <= numero_2_; j++) {
    sumatorio_2 += j;
  }
  ComputeInt sumatorio(sumatorio_1, sumatorio_2);
  return sumatorio;
}

/// @brief veifica si un numero es primo
/// @param numero_1_ 
/// @return si es primo o no
bool IsPrime(int numero_1_) {
  bool primo{0};
  if (numero_1_ <=1 ) {
    primo = 0;
  }
  if (numero_1_ == 2) {
    primo = 1;
  }
  if ((numero_1_ % 2) == 0) {
    primo = 0;
  }
  for (int i = 3; i <= sqrt(numero_1_); i += 2) {
    if (numero_1_ % i == 0) {
      primo = 0;
    }    
    primo = 1;
  }
  return primo; 
}

/// @brief revisa si dos numeros son primos relativos
/// @param numero_1_ 
/// @param numero_2_ 
/// @return si son primos relaivos o no
bool AreRelativePrimes(int numero_1_, int numero_2_) {
  bool primos{0};
  if (numero_1_ > numero_2_) {
    for (int i = 2; i <= numero_2_; i++) {
      if ((numero_2_ % i) == 0) {
        if ((numero_1_ % i) == 0) {
          primos = 1;
        }
        primos = 0;
      }
    }
  }
  if (numero_1_ < numero_2_) {
    for (int j = 2; j <= numero_1_; j++) {
      if ((numero_1_ % j) == 0) {
        if ((numero_2_ % j) == 0) {
          primos = 1;
        }
        primos = 0;
      }
    }
  }
  return primos;
}

