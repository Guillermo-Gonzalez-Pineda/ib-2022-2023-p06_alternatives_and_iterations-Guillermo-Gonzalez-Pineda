#include <iostream>
#include <iomanip>

int main () {
  int horas;
  int minutos;
  int segundos;
  std::cin >> horas >> minutos >> segundos;
  segundos++;
  if (segundos==60) {
    minutos++;
    segundos = 0;
  }
  if (minutos==60) {
    horas++;
    minutos = 0;
  }
  if (horas==24) horas = 0;
  if (segundos < 10) {
    std::cout << horas << ":" << minutos << ":" << "0" << segundos << std::endl;
  } else if (segundos < 10 && minutos < 10) {
    std::cout << horas << ":" << "0" << minutos << ":" << "0" << segundos << std::endl;
  }else if (minutos < 10) {
    std::cout << horas << ":" << "0" << minutos << ":" << segundos << std::endl;
  }else std::cout << horas << ":" << minutos << ":" << segundos << std::endl;
  return 0;
}
