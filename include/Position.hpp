#ifndef POSITION_HPP_
#define POSITION_HPP 
#include <string>
class Position
{
protected:
	int x = 0;
	int y = 0;
public:
	Position operator+ (const Position& rhs) const;
	bool operator==(const Position& rhs) const;
	int getX();
	void setX(int x);
	int getY();
	void setY(int y);
	std::string to_string();

	
	Position(){
		this->x = 0;
		this->y = 0;
	}
	Position(int x = 0, int y = 0) : x(x), y(y) {
		this->x = x;
		this->y = y;
	}
	~Position() {};
};
#endif