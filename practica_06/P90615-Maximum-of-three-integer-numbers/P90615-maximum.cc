/**
  *Universidad de La Laguna
  *Escuela superior de ingeniería y tecnología
  *Grado Ingenieria Informática
  *Informática Básica
  *
  *@file P90615-maximum.cc
  *@date 07/11/2022
  *@author Guillermo González Pineda alu0101574899@ull.edu.es
  */

#include <iostream>

int main() {
  int numero1;
  int numero2;
  int numero3;
  std::cin >> numero1 >> numero2 >> numero3;
  if (numero1 > numero2 && numero1 >= numero3) {
    std::cout << numero1 << std::endl;
  } 
  else if (numero2 >= numero1 && numero2 > numero3) {
    std::cout << numero2 << std::endl;
  }
  else {
    std::cout << numero3 << std::endl;
  }
  return 0;
}
