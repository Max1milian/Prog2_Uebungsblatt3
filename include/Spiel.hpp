#ifndef SPIEL_HPP_
#define SPIEL_HPP_

#include "Aufgabe.hpp"
#include "SimpleInput.hpp"
#include "Configuration.hpp"
#include "Cursor.hpp"
#include "Console.hpp"
#include <sstream>
#include <iostream>

class Spiel
{
public:
	int aktiverSpielstein = 0;
	Spiel(Aufgabe aufgabe);
	~Spiel();
	void init();
	void kleinspiel(Aufgabe* aufgabe);

	void ausgabeLogo();
	void ausgabeRahmen();
	void ausgabeLegende();
	void ausgabeSteuerung();
	void ausgabePunkte();
	void ausgabeZeit();

	void spielSchleife();
	void spielzug();
	bool eingabeErlaubt(char input);

private:
	Aufgabe aktuelleAufgabe;
};
#endif;