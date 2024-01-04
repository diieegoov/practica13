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

#include <iostream>
#include <string>
#include <cmath>

void PrintProgramPurpose() {
  std::cout << "This program prints the factorial, the sum of the first n terms of the serie 1 + 2 ";
  std::cout << "+ 3 + ... + n, if are primes numbers, if are perfect primes and if are relative primes "; 
  std::cout << "two numbers that enters in input."<< "\n" << "\n";
}

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber) {
  if (argc != kCorrectNumber) {
    std::cout << "This program has been executed with a wrong number of parameters. Should enter 2 numbers" << std::endl;
    return false;
  }
  return true;
}

class ComputeInt {
 public:
  ComputeInt(int, int); //Constructor
  ComputeInt Factorial();
  int numero_1() const { return numero_1_; }
  int numero_2() const { return numero_2_; }
  ComputeInt SumSerie();
  ComputeInt IsPrime();
  int AreRelativePrimes();
  friend std::ostream& operator<<(std::ostream& out, const ComputeInt& objeto);
 private:
  int numero_1_, numero_2_;
};

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

int main(const int argc, char *argv[]) {
  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 3)) {
    return 1;
  };
  int numero_1 = std::stoi(argv[1]);
  int numero_2 = std::stoi(argv[2]);
  ComputeInt compute_integer{numero_1, numero_2};
  std::cout << "Factoriales: ";
  std::cout << compute_integer.Factorial() << std::endl;
  std::cout << "Sumatorios: " << compute_integer.SumSerie() << std::endl;
  std::cout << "Son primos: " << "\n" << std::boolalpha << IsPrime(numero_1) << "\n" << IsPrime(numero_2) << std::endl;
  std::cout << "\n" << "Son primos relativos: " << "\n" << AreRelativePrimes(numero_1, numero_2) << std::endl;
  return 0;
}

/**Desarrolle una clase ComputeInt que permita la realización de diferentes cálculos con números enteros.
  *  Incluya al menos los siguientes métodos en la clase: Factorial que permita calcular el factorial de
  *  un número (Problema Factorial de Jutge). SumSerie que calcule la suma de los primeros n términos de
  *  la serie: 1 + 2 + 3 + ... + n. IsPrime que permita determinar si un determinado número es primo 
  * (Problema Primality de Jutge). IsPerfectPrime que permita determinar si un determinado número es un 
  * primo perfecto (Problema Perfect primes de Jutge). AreRelativePrimes que permita determinar si dos 
  * números son mutuamente primos, es decir, si su único divisor común es el 1 La función main del 
  * programa que usara esta clase podría contener, entre otras, sentencias similares a las siguientes:
*/