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

#include "compute_int.h"

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

int GetNumber1(char *argv[]) {
  int numero_1 = std::stoi(argv[1]);
  return numero_1;
}

int GetNumber2(char *argv[]) {
  int numero_2 = std::stoi(argv[2]);
  return numero_2;
}



int main(const int argc, char *argv[]) {
  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 3)) {
    return 1;
  };
  int numero_1 = GetNumber1(argv);
  int numero_2 = GetNumber2(argv);
  ComputeInt compute_integer{numero_1, numero_2};
  std::cout << "Factoriales: ";
  std::cout << compute_integer.Factorial() << std::endl;
  std::cout << "Sumatorios: " << compute_integer.SumSerie() << std::endl;
  std::cout << "Son especiales: " << IsSpecial(numero_1) << "\n";
  return 0;
}