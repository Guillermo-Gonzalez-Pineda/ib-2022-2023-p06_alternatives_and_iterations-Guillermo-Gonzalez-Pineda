/**
  * Universidad de La Laguna
  * Facultad de Ingenieria y Tecnologia
  * Grado de Ingenieria Informatica
  * Informatica Basica
  * 
  * @author Guillermo Gonzalez Pineda
  * @file P15613-temperatures.cc
  * @date 07/11/2022
  */

#include <iostream>

int main() {
  /* std::cout << "Este programa nos dice si hace calor o frio segun la tamperatura"
  "puesta" << std::endl; */
  // std::cout << "Introduzca una temperatura" << std::endl;
  int temperatura;
  std::cin >> temperatura;
  if (temperatura > 30 && temperatura < 100) {
    std::cout << "it's hot" << std::endl;
  } else
    if (temperatura >= 100) {
      std::cout << "it's hot\nwater would boil" << std::endl;
    } 
  if (temperatura < 10 && temperatura > 0) {
    std::cout << "it's cold" << std::endl;
  } else
  if (temperatura <= 0) {
      std::cout << "it's cold\nwater would freeze" << std::endl;
    } 
  if (temperatura >= 10 && temperatura <= 30) {
    std::cout << "it's ok" << std::endl;
  }
  return 0;
}

