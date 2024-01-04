#include <iostream>
#include <vector>

int main(const int argc, char *argv[]) {
  char uno, dos, tres;
  std::vector<char> numeros;
  std::string num = argv[1];
  for (char& c : num) {
    numeros.push_back(c);
  }
  std::cout << numeros[0] << "\n";
  int aux = numeros[0];
  std::cout << aux - 48 << "\n";
}