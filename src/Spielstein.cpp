#include "Spielstein.hpp"

void Spielstein::init() {
	//IHR CODE / TEILVORLAGE
	switch (typ)
	{
	case SPIELSTEIN_Z2:
	{
		name = "Z2";
		farbe = HINTERGRUND_BLAU;
		felder[0][0].push_back(Position(2, 0));//__#_
		felder[0][0].push_back(Position(1, 1));//_##_
		felder[0][0].push_back(Position(2, 1));//_#__
		felder[0][0].push_back(Position(1, 2));//____

		felder[0][1].push_back(Position(1, 1));//____
		felder[0][1].push_back(Position(2, 1));//_##_
		felder[0][1].push_back(Position(2, 2));//__##
		felder[0][1].push_back(Position(3, 2));//____

		felder[0][2].push_back(Position(2, 0));//__#_
		felder[0][2].push_back(Position(1, 1));//_##_
		felder[0][2].push_back(Position(2, 1));//_#__
		felder[0][2].push_back(Position(1, 2));//____

		felder[0][3].push_back(Position(1, 1));//____
		felder[0][3].push_back(Position(2, 1));//_##_
		felder[0][3].push_back(Position(2, 2));//__##
		felder[0][3].push_back(Position(3, 2));//____

		felder[1][0].push_back(Position(1, 0));//_#__
		felder[1][0].push_back(Position(1, 1));//_##_
		felder[1][0].push_back(Position(2, 1));//__#_
		felder[1][0].push_back(Position(2, 2));//____

		felder[1][1].push_back(Position(2, 1));//____
		felder[1][1].push_back(Position(3, 1));//__##
		felder[1][1].push_back(Position(1, 2));//_##_
		felder[1][1].push_back(Position(2, 2));//____

		felder[1][2].push_back(Position(1, 0));//_#__
		felder[1][2].push_back(Position(1, 1));//_##_
		felder[1][2].push_back(Position(2, 1));//__#_
		felder[1][2].push_back(Position(2, 2));//____

		felder[1][3].push_back(Position(2, 1));//____
		felder[1][3].push_back(Position(3, 1));//__##
		felder[1][3].push_back(Position(1, 2));//_##_
		felder[1][3].push_back(Position(2, 2));//____
		break;
	}
	case SPIELSTEIN_Z3:
	{
		
		break;
	}
	case SPIELSTEIN_L2:
	{
		
		break;
	}
	case SPIELSTEIN_L3:
	{
		
		break;
	}
	case SPIELSTEIN_L4:
	{
		

		break;
	}
	case SPIELSTEIN_I2:
	{
		
		break;
	}
	case SPIELSTEIN_I3:
	{
		
		break;
	}
	case SPIELSTEIN_I4:
	{
		
		break;
	}
	case SPIELSTEIN_Q:
	{
		
		break;
	}
	case SPIELSTEIN_QPLUS: //GECHECKT
	{
		
		break;
	}
	case SPIELSTEIN_T:
	{
		
		break;
	}
	case SPIELSTEIN_TPLUS:
	{
		
		break;
	}
	case SPIELSTEIN_FREI:
	{
		name = "FREI";
		farbe = HINTERGRUND_HELL_GRAU;
		break;
	}
	case SPIELSTEIN_LOESUNG:
	{
		name = "LOESUNG";
		farbe = HINTERGRUND_HELL_WEISS;
		break;
	}
	default:
		break;
	}
}
void Spielstein::zeichne()
{
	//IHR CODE
}
void Spielstein::loesche()
{
	//IHR CODE
}


void Spielstein::bewegen(int richtung)
{
	//IHR CODE
}
//Inkrementiert das Attribut orientierung um 1, wobei stets Werte zwischen 0 und 3 angenommen werden.
void Spielstein::rotation_rechts()
{
	//IHR CODE
}
//Dekrementiert das Attribut orientierung um 1, wobei stets Werte zwischen 0 und 3 angenommen werden.
void Spielstein::rotation_links()
{
	//IHR CODE
}
//Inkrementiert das Attribut seite um 1, wobei stets Werte zwischen 0 und 1 angenommen werden.
void Spielstein::flip()
{
	//IHR CODE
}

//Gibt den felder Vektor der aktuellen Lage des Spielsteins zur�ck.
std::vector<Position>* Spielstein::getPositionen()
{
	//IHR CODE
	return null;
}

//Durchl�uft den felder Vektor des Spielsteins in aktueller Lage.
//Gibt true zur�ck, falls die �bergebene Position innerhalb des Spielsteines liegt.
//Ansonsten wird false zur�ckgegeben.
bool Spielstein::innerhalb(Position pos) const
{
	//IHR CODE
	return true;
}

//Gibt war zur�ck, falls sich der aufrufende und der �bergebene Spielstein sich in mindestens einer Position �berlappen.
bool Spielstein::ueberlapp(Spielstein& sp) 
{
	//IHR CODE
	return true;
}

//Addiert zwei Spielsteine in ihrer aktuellen Lage und gibt die Summe als neuen Spielstein zur�ck.
Spielstein Spielstein::operator+ (const Spielstein& rhs) const
{
	Spielstein summe(SPIELSTEIN_FREI);
	//IHR CODE
	return summe;
}
