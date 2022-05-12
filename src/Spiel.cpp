#include "Spiel.hpp"
#include "Configuration.hpp"
#include <string>
#include <fstream>

void Spiel::init(){
    Console::verstecken();
    Spiel::ausgabeLogo();
    Spiel::ausgabeRahmen();
    Spiel::ausgabeLegende();
    Spiel::ausgabeSteuerung();
}

void Spiel::ausgabeLogo(){
 	Cursor::bewegen(CONFIGURATION::SPIELFELD_DIMENSION_X / 2 + CONFIGURATION::SPIELFELD_OFFSET_X, CONFIGURATION::SPIELFELD_DIMENSION_Y + CONFIGURATION::SPIELFELD_OFFSET_Y + 2);
	std::cout << "   _____                  __  .__                        ";
	Cursor::runter(1);
	std::cout << "  /     \  __ __  _______/  |_|  |__ _____ ___  __ ____  ";
	Cursor::runter(1);
	std::cout << " /  \ /  \|  |  \/  ___/\   __\  |  \\__  \\  \/ // __ \ ";
	Cursor::runter(1);
	std::cout << "/    Y    \  |  /\___ \  |  | |   Y  \/ __ \\   /\  ___/ ";
	Cursor::runter(1);
	std::cout << "\____|__  /____//____  > |__| |___|  (____  /\_/  \___  >";
	Cursor::runter(1);
	std::cout << "        \/           \/            \/     \/          \/ ";

}

void Spiel::ausgabeRahmen(){
	//damit der Rahmen nicht direkt am Rande des Konsolenfensters beginnt, starten wir beim offstet und addieren ihn bei Dimension wieder drauf
	//um die Groeße beizubehalten
    for (int i = CONFIGURATION::SPIELFELD_OFFSET_X; i < CONFIGURATION::SPIELFELD_DIMENSION_X + CONFIGURATION::SPIELFELD_OFFSET_X; i++)		//loopt spalten durch
	{
		for (int j = CONFIGURATION::SPIELFELD_LOESUNG_Y; j < CONFIGURATION::SPIELFELD_DIMENSION_Y + CONFIGURATION::SPIELFELD_OFFSET_Y; j++)	//loopt zeilen durch
		{
			if(j == (CONFIGURATION::SPIELFELD_OFFSET_Y + 1 || CONFIGURATION::SPIELFELD_OFFSET_Y + 1 + CONFIGURATION::SPIELFELD_DIMENSION_Y))
			{
				Console::zeichne_punkt(i, j, CONFIGURATION::SPIELFELD_BEGRENZUNG);
			}
			if(i == (CONFIGURATION::SPIELFELD_OFFSET_X + 1 || CONFIGURATION::SPIELFELD_OFFSET_X + 1 + CONFIGURATION::SPIELFELD_DIMENSION_X))
			{
				Console::zeichne_punkt(i, j, CONFIGURATION::SPIELFELD_BEGRENZUNG_BREITE);
			}
		}
	}

    
}

void Spiel::ausgabeLegende(){
    Cursor::bewegen(CONFIGURATION::SPIELFELD_OFFSET_X, CONFIGURATION::SPIELFELD_OFFSET_Y + CONFIGURATION::SPIELFELD_DIMENSION_Y + 15);

	Spielstein(1).zeichne();
	Cursor::rechts(5);

	Spielstein(2).zeichne();
	Cursor::rechts(5);
	Cursor::runter(5);
	Cursor::links(10);

	Spielstein(3).zeichne();
	Cursor::rechts(5);

	Spielstein(4).zeichne();
	Cursor::rechts(5);
	Cursor::runter(5);
	Cursor::links(10);

	Spielstein(5).zeichne();
	Cursor::rechts(5);

	Spielstein(6).zeichne();
	Cursor::rechts(5);
	Cursor::runter(5);
	Cursor::links(10);

	Spielstein(7).zeichne();
	Cursor::rechts(5);

	Spielstein(8).zeichne();
	Cursor::rechts(5);
	Cursor::runter(5);
	Cursor::links(10);

	Spielstein(9).zeichne();
	Cursor::rechts(5);

	Spielstein(10).zeichne();

        
}

void Spiel::ausgabeSteuerung(){
	Cursor::bewegen((CONFIGURATION::SPIELFELD_OFFSET_X + CONFIGURATION::SPIELFELD_DIMENSION_X), 2);
	std::cout << "\nSpielstein - Bewegung\n"; 
	std::cout << "W - Hoch\n";
	std::cout << "A - Links\n";
	std::cout << "S - Runter\n";
	std::cout << "D - Rechts \n";
	std::cout << "Q - Linksrotation\n";
	std::cout << "E - Rechtsrotation\n";
	std::cout << "F - Flip\n";
	std::cout << "1,2,3,4 - STEINAUSWAHL\n";

}

void Spiel::ausgabeZeit(){


}

void Spiel::spielSchleife(){
    while (!aktuelleAufgabe.geloest())
    {
        spielzug();
    }
    
}

void Spiel::spielzug(){
	//hier nehmen wir den input des Spieler und prüfen ihn auf seine Gültigkeit
	//wenn d
		if(SimpleInput::getSteuerung(CONFIGURATION::INTERVALL) == (CONFIGURATION::SPIELSTEIN_BEWEGEN_HOCH || CONFIGURATION::SPIELSTEIN_BEWEGEN_LINKS || CONFIGURATION::SPIELSTEIN_BEWEGEN_RECHTS || CONFIGURATION::SPIELSTEIN_BEWEGEN_RUNTER))
		{
			Spiel::aktuelleAufgabe.getSpielstein(aktiverSpielstein)->loesche();
			switch (SimpleInput::getSteuerung(CONFIGURATION::INTERVALL))
			{
			case CONFIGURATION::SPIELSTEIN_BEWEGEN_HOCH:
				Spiel::aktuelleAufgabe.getSpielstein(aktiverSpielstein)->bewegen(CONFIGURATION::SPIELSTEIN_BEWEGEN_HOCH);
				break;

			case CONFIGURATION::SPIELSTEIN_BEWEGEN_LINKS:
				Spiel::aktuelleAufgabe.getSpielstein(aktiverSpielstein)->bewegen(CONFIGURATION::SPIELSTEIN_BEWEGEN_LINKS);
				break;

			case CONFIGURATION::SPIELSTEIN_BEWEGEN_RECHTS:
				Spiel::aktuelleAufgabe.getSpielstein(aktiverSpielstein)->bewegen(CONFIGURATION::SPIELSTEIN_BEWEGEN_RECHTS);
				break;

			case CONFIGURATION::SPIELSTEIN_BEWEGEN_RUNTER:
				Spiel::aktuelleAufgabe.getSpielstein(aktiverSpielstein)->bewegen(CONFIGURATION::SPIELSTEIN_BEWEGEN_RUNTER);
				break;

			case CONFIGURATION::SPIELSTEIN_ROTIEREN_RECHTS:
				Spiel::aktuelleAufgabe.getSpielstein(aktiverSpielstein)->bewegen(CONFIGURATION::SPIELSTEIN_ROTIEREN_RECHTS);
				break;

			case CONFIGURATION::SPIELSTEIN_ROTIEREN_LINKS:
				Spiel::aktuelleAufgabe.getSpielstein(aktiverSpielstein)->bewegen(CONFIGURATION::SPIELSTEIN_ROTIEREN_LINKS);
				break;

			default:
				break;
			}
		}
		else
		{
			return;
		}
   }
    

void Spiel::kleinspiel(Aufgabe* aufgabe) {
		aktuelleAufgabe = *aufgabe;
		init();
		spielSchleife();
}
