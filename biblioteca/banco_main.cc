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
   */

#include <iostream>
#include <string>
#include "banco.h"

int main() {
  Cuenta cuenta_diego;
  cuenta_diego.PrintSaldo();
  std::string respuesta;
  std::cin >> respuesta;
  if (respuesta == "depositar") {
    std::cout << "¿Cuánto dinero quiere depositar?: ";
    int cantidad;
    std::cin >> cantidad;
    std::cout << "Saldo actual de la cuenta: " << cuenta_diego.Depositar(cantidad) << "€" << "\n";
  }
  if (respuesta == "d") {
    std::cout << "¿Cuánto dinero quiere depositar?: ";
    int cantidad;
    std::cin >> cantidad;
    std::cout << "Saldo actual de la cuenta: " << cuenta_diego.Depositar(cantidad) << "€" << "\n";
  }
  if (respuesta == "D") {
    std::cout << "¿Cuánto dinero quiere depositar?: ";
    int cantidad;
    std::cin >> cantidad;
    std::cout << "Saldo actual de la cuenta: " << cuenta_diego.Depositar(cantidad) << "€" << "\n";
  }
  if (respuesta == "retirar") {
    std::cout << "¿Cuánto dinero quiere retirar?: ";
    int cantidad;
    std::cin >> cantidad;
    std::cout << "Saldo actual de la cuenta: " << cuenta_diego.Retirar(cantidad) << "€" << "\n";
  }
  if (respuesta == "r") {
    std::cout << "¿Cuánto dinero quiere retirar?: ";
    int cantidad;
    std::cin >> cantidad;
    std::cout << "Saldo actual de la cuenta: " << cuenta_diego.Retirar(cantidad) << "€" << "\n";
  }
  if (respuesta == "R") {
    std::cout << "¿Cuánto dinero quiere retirar?: ";
    int cantidad;
    std::cin >> cantidad;
    std::cout << "Saldo actual de la cuenta: " << cuenta_diego.Retirar(cantidad) << "€" << "\n";
  }
}