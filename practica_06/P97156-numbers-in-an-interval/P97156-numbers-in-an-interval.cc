/**
  *Universidad de La Laguna
  *Escuela superior de ingeniería y tecnología
  *Grado Ingenieria Informática
  *Informática Básica
  *
  *@file P97156-numbers-in-an-interval.cc
  *@date 07/11/2022
  *@author Guillermo González Pineda alu0101574899@ull.edu.es
  */

#include <iostream>

int main () {
  int a;
  int b;
  std::cin >> a >> b;
  for (int i = a; i < b; i++) std::cout << i << ',';
  if (b>=a) std::cout << b;
  std::cout << std::endl;
  return 0;
}
