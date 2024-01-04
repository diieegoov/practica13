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

#ifndef COMPUTE_INT_H
#define COMPUTE_INT_H

void PrintProgramPurpose();

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber);

class ComputeInt {
 public:
  ComputeInt(int, int); //Constructor
  int numero_1() const { return numero_1_; }
  int numero_2() const { return numero_2_; }
  ComputeInt Factorial();
  ComputeInt SumSerie();
  friend std::ostream& operator<<(std::ostream& out, const ComputeInt& objeto);
  bool IsPrime(int numero_1_)
 private:
  int numero_1_, numero_2_;
};

#endif