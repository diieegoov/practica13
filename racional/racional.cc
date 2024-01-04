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

#ifndef RACIONAL_H
#define RACIONAL_H 

#include <iostream>
#include <string>
#include <vector>
#include "racional.h"

int main(const int argc, char *argv[]) {
  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 3)) {
    return 1;
  }
  std::string racional_1 = argv[1];
  std::vector<char> num1;
  for (char& c : racional_1) {
    num1.push_back(c);
  }
  int auxiliar1 = num1[0];
  double numerador_1 = auxiliar1 - 48; // -48 para que el código ascii se reduzca hasta el que representa el número real
                               // sin el -48, saldría 55 en el caso de que el número sea 7, pues 55-48=7
  int auxiliar2 = num1[2];
  double denominador_1 = auxiliar2 - 48;
  Racional numero_1(numerador_1, denominador_1);
  std::string racional_2 = argv[2];
  std::vector<char> num2;
  for (char& m : racional_2) {
    num2.push_back(m);
  }
  int auxiliar11 = num2[0];
  double numerador_2 = auxiliar11 - 48; // -48 para que el código ascii se reduzca hasta el que representa el número real
                               // sin el -48, saldría 55 en el caso de que el número sea 7, pues 55-48=7
  int auxiliar22 = num2[2];
  double denominador_2 = auxiliar22 - 48;
  Racional numero_2(numerador_2, denominador_2);
  std::cout << "Suma: " << numero_1 + numero_2 << "\n" << "\n";
  std::cout << "Resta: " << numero_1 - numero_2 << "\n" << "\n";
  std::cout << "Multiplicación: " << numero_1 * numero_2 << "\n" << "\n";
  std::cout << "División: " << numero_1 / numero_2 << "\n" << "\n";
  std::cout << "Son equivalentes: " << std::boolalpha << Equivalente(numerador_1, denominador_1, numerador_2, denominador_2);
  std::cout << "\n" << "\n";
  return 0;
}



/*Separe el diseño de su clase Racional en dos ficheros, racional.h y racional.cc conteniendo 
respectivamente la declaración y la definición de la clase. La clase Racional incluirá al menos métodos
 para: Crear objetos de tipo Racional. Se debe implementar un constructor por defecto y uno parametrizado. 
 Escribir (a fichero o a pantalla) un objeto de tipo Racional. Leer (por teclado o desde fichero) un 
 objeto de tipo Racional. Sumar dos objetos de tipo Racional. Restar dos objetos de tipo Racional. 
 Multiplicar dos objetos de tipo Racional. Dividir dos objetos de tipo Racional. Comparar objetos de 
 tipo Racional. El programa ha de permitir leer un fichero de texto en el que figuran pares de números 
 racionales separados por espacios de la forma: a/b c/d    e/f g/h
*/



#endif
