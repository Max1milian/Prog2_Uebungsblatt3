#include "Position.hpp"
#include <string>
int Position::getX()
{
	return x;
}
void Position::setX(int x)
{
	this->x = x;
}
int Position::getY()
{
	return y;
}
void Position::setY(int y)
{
	this->y = y;
}

std::string Position::to_string(){ 
	std::string spos {};
    spos = "Pos: x = ";
    spos.append(std::to_string(x));
    spos.append(", y = ") ;
    spos.append(std::to_string(y));
    return spos;	
}
//Addiert zwei Positionen indem die Attribute x und y addiert werden.

Position Position::operator+ (const Position& rhs) const {
	//hier krieren wie eine new_pos auf dem Stack um die additionen durchführen zu können.
	//die intention ist, dass wenn wir die zwei klassen miteinander addieren der Compiler weis was miteinander addiert werden muss
	Position new_pos((0,0));
	new_pos.x = x + rhs.x; //hier ist x vom ersten Operanden und rhs vom zweiten operanden
	new_pos.y = y + rhs.y; //gleiches für y
	return new_pos;
}
//Vergleicht zwei Position Instanzen. Gibt true zurück, falls x und y beider Instanzen identisch sind, sonst false.
bool Position::operator==(const  Position& rhs) const
{
	if (x == rhs.x && y == rhs.y) { //hier findet der vergleich vom ersten operanden und dem zweiten statt
		return true;
	}
	else {
		return false;
	}
		
}