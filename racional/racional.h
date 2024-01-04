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

void PrintProgramPurpose() {
  std::cout << "This program prints the sum, the subtraction, the multiplication, the division and ";
  std::cout << " if two rational numbers are equivalents" << "\n" << "\n";
}

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber) {
  if (argc != kCorrectNumber) {
    std::cout << "This program has been executed with a wrong number of parameters. Should enter 2 rational numbers" << std::endl;
    return false;
  }
  return true;
}

class Racional {
 public:
  Racional(double, double); //Constructor
  Racional(); //Constructor por defecto
  friend Racional operator+(const Racional& numero_1, const Racional& numero_2);
  friend Racional operator-(const Racional& numero_1, const Racional& numero_2);
  friend Racional operator*(const Racional& numero_1, const Racional& numero_2);
  friend Racional operator/(const Racional& numero_1, const Racional& numero_2);
  friend std::ostream& operator<<(std::ostream& out, const Racional& objeto);
 private:
  double numerador_, denominador_;
};

Racional::Racional() { //Constructor por defecto
  numerador_ = 0;
  denominador_ = 0;
}

Racional::Racional(double numerador, double denominador) { //Inicializador
  numerador_ = numerador;
  denominador_ = denominador;
}

std::ostream& operator<<(std::ostream& out, const Racional& objeto) {
  out << objeto.numerador_ << "/" << objeto.denominador_ << "\n";
  return out;
}

Racional operator+(const Racional& numero_1, const Racional& numero_2) {
  Racional suma;
  suma.numerador_ = (numero_1.numerador_ * numero_2.denominador_) + (numero_2.numerador_ * numero_1.denominador_);
  suma.denominador_ = numero_1.denominador_ * numero_2.denominador_;
  return suma;
}

Racional operator-(const Racional& numero_1, const Racional& numero_2) {
  Racional resta;
  resta.numerador_ = (numero_1.numerador_ * numero_2.denominador_) - (numero_2.numerador_ * numero_1.denominador_);
  resta.denominador_ = numero_1.denominador_ * numero_2.denominador_;
  return resta;
}

Racional operator*(const Racional& numero_1, const Racional& numero_2) {
  Racional multiplicacion;
  multiplicacion.numerador_ = numero_1.numerador_ * numero_2.numerador_;
  multiplicacion.denominador_ = numero_1.denominador_ * numero_2.denominador_;
  return multiplicacion;
}

Racional operator/(const Racional& numero_1, const Racional& numero_2) {
  Racional div;
  div.numerador_ = numero_1.numerador_ * numero_2.denominador_;
  div.denominador_ = numero_1.denominador_ * numero_2.numerador_;
  return div;
}

bool Equivalente(double numero_1_num, double numero_1_den, double numero_2_num, double numero_2_den) {
  bool equivalente{0};
  if ((numero_1_num * numero_2_den) == (numero_1_den * numero_2_num)) {
    equivalente = 1;
  }
  return equivalente;
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