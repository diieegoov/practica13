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