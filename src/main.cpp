#include "Console.hpp"
#include "Cursor.hpp"
#include <iostream>
int main() {
  Console::init();
  Cursor::setze_Farbe(HINTERGRUND_HELL_LILA);
  for (int x = 10; x < 35; x++)
    for (int y = 5; y < 10; y++) {
      if (x == 10 || x == 34 || y == 5 || y == 9)
        Console::zeichne_punkt(x, y, ' ');
    }
  Cursor::bewegen(13, 7);
  Cursor::setze_Farbe(HINTERGRUND_SCHWARZ);
  std::cout << "Hochschule Augsburg";
  return 0;
}