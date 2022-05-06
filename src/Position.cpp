#include "Position.hpp"
int Position::getX()
{
	return x;
}
void Position::setX(int x)
{
	//IHR CODE
}
int Position::getY()
{
	return y;
}
void Position::setY(int y)
{
	//IHR CODE
}
//Addiert zwei Positionen indem die Attribute x und y addiert werden.

Position Position::operator+ (const Position& rhs) const {
	//IHR CODE
	return Position(0,0);
}
//Vergleicht zwei Position Instanzen. Gibt true zur�ck, falls x und y beider Instanzen identisch sind, sonst false.
bool Position::operator==(const  Position& rhs) const
{
	//IHR CODE
	return true;
}