#include "Vector2d.h"
#include <iostream>
#include <cmath>
/*Vector2d::Vector2d() 
{
	this->x = 0;
	(*this).y = 0;
}*/
Vector2d::Vector2d(double x, double y)
{
	this->x = x;
	(*this).y = y;
}
Vector2d::Vector2d(double x1, double y1, double x2, double y2)
{
	this->x = x2 - x1;
	(*this).y = y2 - y1;
}
/*void Vector2d::setx(double x)
{
	std::cin >> x;
}
double Vector2d::getx()
{
	return Vector2d::x;
}
void Vector2d::sety(double y)
{
	std::cin >> y;
}
double Vector2d::gety()
{
	return Vector2d::y;
}*/
void Vector2d::print() 
{
	std::cout << Vector2d::x << ' ' << Vector2d::y;
}
void Vector2d::sum(Vector2d b) 
{
	x += b.x;
	y += b.y;
}
void Vector2d::sub(Vector2d b) 
{
	x -= b.x;
	y -= b.y;
}
double Vector2d::scalarMult(Vector2d b) 
{
	x *= b.x;
	y *= b.y;
	return x + y;
}
void Vector2d::mult(double value) 
{
	x *= value;
	y *= value;
}
double Vector2d::length()
{
	return sqrt(pow(x, 2) + pow(y, 2));
}
double Vector2d::tanAngle(Vector2d b)
{
	x *= b.y;
	y *= b.x;
	return (x - y) / scalarMult(b);
}
void main() 
{
	Vector2d a(3, 5);
	Vector2d b(4, 8);
	a.sum(b);
	a.print();
	std::cout << std::endl;
	a.sub(b);
	a.print();
	std::cout << std::endl;
	a.scalarMult(b);
	a.print();
	std::cout << std::endl;
	a.mult(4);
	a.print();
	std::cout << std::endl;
	a.length();
	a.print();
	std::cout << std::endl;
	a.tanAngle(b);
	a.print();
	std::cout << std::endl;
}