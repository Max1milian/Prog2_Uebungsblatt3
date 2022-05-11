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
 std::fstream flogo ("Logo.txt");
 std::string slogo {};
 while (flogo.is_open())
 {
     if (flogo.good())
     {
         getline(flogo, slogo);
     }
     
 }
 
}

void Spiel::ausgabeRahmen(){
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
        for (int i = 0; i < 100; i++)
        {

        }
        
}

void Spiel::ausgabeSteuerung(){

}

void Spiel::ausgabeZeit(){


}

void Spiel::spielSchleife(){
    while (!Aufgabe::geloest)
    {
        spielzug();
    }
    
}

void Spiel::spielzug(){
   SimpleInput::getSteuerung;
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