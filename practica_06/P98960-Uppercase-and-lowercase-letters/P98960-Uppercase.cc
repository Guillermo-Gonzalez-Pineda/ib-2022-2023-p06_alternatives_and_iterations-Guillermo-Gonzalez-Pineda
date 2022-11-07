/**
  *Universidad de La Laguna
  *Escuela superior de ingeniería y tecnología
  *Grado Ingenieria Informática
  *Informática Básica
  *
  *@file P98960-Uppercase.cc
  *@date 07/11/2022
  *@author Guillermo González Pineda alu0101574899@ull.edu.es
  */

#include <iostream>

int main() {
  /* std::cout << "\nEste programa cambia letras de mayusculas a minusculas "    
  << "y viceversa" << std::endl; */
  /* std::cout << "=================================================================="
  << std::endl; */
  char letra {0};
  // std::cout << "\nEscribe una letra: " << std::endl;
  std::cin >> letra;
  int letra_ascii = int(letra);
  if (letra_ascii > 90) {
    letra_ascii = letra_ascii - 32;
  } else {
    letra_ascii = letra_ascii + 32;   
  }
  letra = char(letra_ascii);
  std::cout << letra << std::endl;
  return 0;
  
}
