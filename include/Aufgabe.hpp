#ifndef AUFGABE_HPP_
#define AUFGABE_HPP_

#include <vector>
#include "Spiel.hpp"

class Aufgabe
{
    friend Spiel;
private:
    std::vector<Spielstein*> steine;
public:
    Spielstein* loesung_ptr;
    Spielstein* getSpielstein(unsigned int index);
    bool geloest();
    void zeichne();
    void loesche();
    Aufgabe(Spielstein* stein1_ptr, stein2_ptr, stein3_ptr, loesung_ptr);
};

#endif