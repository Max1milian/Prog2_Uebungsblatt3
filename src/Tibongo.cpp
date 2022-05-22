#include <iostream>
#include "Spielstein.hpp"
#include "Configuration.hpp"
#include "Aufgabe.hpp"
#include "Spiel.hpp"
#include <memory>


void testSpielsteine()
{
	for (int i = 0; i <= 11; i++)
	{
		std::unique_ptr<Spielstein>stein_ptr (new Spielstein(i));//hab das nochmal mit unique_ptr geschrieben weil kein delete vorhanden
		//Spielstein* stein_ptr = new Spielstein(i);
		stein_ptr->position.setX(i * 6);
		stein_ptr->position.setY(15);
		stein_ptr->zeichne();
	}
}

int main()
{
	Console::init();
	Cursor::setze_Farbe(HINTERGRUND_HELL_LILA);
	for (int x = 10; x < 35; x++)
		for (int y = 5; y < 10; y++)
		{
			if (x==10 || x == 34 || y == 5 || y == 9)
				Console::zeichne_punkt(x, y, ' ');
		}
	Cursor::bewegen(13, 7);
	Cursor::setze_Farbe(HINTERGRUND_SCHWARZ);

	std::cout << "Hochschule Augsburg";
	
	testSpielsteine();
	

	Spielstein* s1 = new Spielstein(SPIELSTEIN_T);//erstelle Spielstein auf dem Heap
	Spielstein* s2 = new Spielstein(SPIELSTEIN_L3);
	Spielstein* s3 = new Spielstein(SPIELSTEIN_L4);

	Spielstein* ls = new Spielstein(SPIELSTEIN_LOESUNG);



	s1->position.setX(CONFIGURATION::SPIELFELD_STEIN1_X);//setze Positionen
	s1->position.setY(CONFIGURATION::SPIELFELD_STEIN1_Y);

	s2->position.setX(CONFIGURATION::SPIELFELD_STEIN2_X);
	s2->position.setY(CONFIGURATION::SPIELFELD_STEIN2_Y);

	s3->position.setX(CONFIGURATION::SPIELFELD_STEIN3_X);
	s3->position.setY(CONFIGURATION::SPIELFELD_STEIN3_Y);

	ls->position.setX(CONFIGURATION::SPIELFELD_LOESUNG_X);
	ls->position.setY(CONFIGURATION::SPIELFELD_LOESUNG_Y);

	Aufgabe TestAufgabe(s1, s2, s3, ls);//übergebe als Parameter an Konstruktor
	TestAufgabe.zeichne();

	Spiel TestSpiel(TestAufgabe);



	return 0;
}