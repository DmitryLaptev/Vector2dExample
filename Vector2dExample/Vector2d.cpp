#include "Vector2d.h"
#include <iostream>
#include <cmath>
#include <string>
#include <cstring>
using namespace std;
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
void Vector2d::print() 
{
	std::cout << Vector2d::x << ' ' << Vector2d::y;
}
Vector2d* Vector2d::sum(Vector2d b) 
{
	x += b.x;
	y += b.y;
	return new Vector2d(x, y);
}
Vector2d* Vector2d::sub(Vector2d b)
{
	x -= b.x;
	y -= b.y;
	return new Vector2d(x, y);
}
double Vector2d::scalarMult(Vector2d b) 
{
	return x*b.x + y*b.y;
}
Vector2d* Vector2d::mult(double value) 
{
	x *= value;
	y *= value;
	return new Vector2d(x, y);
}
double Vector2d::length()
{
	return sqrt(pow(x, 2) + pow(y, 2));
}
double Vector2d::tanAngle(Vector2d b)
{
	return (x*b.y - y*b.x) / scalarMult(b);
}
Vector2d Vector2d::operator+(const Vector2d& v) 
{
	return Vector2d(x + v.x, y + v.y);
}
Vector2d Vector2d::operator-(const Vector2d& v) 
{
	return Vector2d(x - v.x, y - v.y);
}
double Vector2d::operator/(Vector2d v) 
{
	return x*v.x + y*v.y;
}
Vector2d operator*(Vector2d& vector, double realNumber)
{
	return Vector2d(realNumber * vector.x, realNumber * vector.y);
}
Vector2d& Vector2d::operator++() 
{
	x++;
	y++;
	return *this;
}
Vector2d Vector2d::operator++(int) 
{
	Vector2d temp(x, y);
	x++;
	y++;
	return temp;
}
Vector2d& Vector2d::operator--()
{
	x--;
	y--;
	return *this;
}
Vector2d Vector2d::operator--(int)
{
	Vector2d temp(x, y);
	x--;
	y--;
	return temp;
}
const Vector2d& Vector2d::operator+=(const Vector2d& vector)
{
	x += vector.x;
	y += vector.y;
	return *this;
}
const Vector2d& Vector2d::operator-=(const Vector2d& vector)
{
	x -= vector.x;
	y -= vector.y;
	return *this;
}
const Vector2d& Vector2d::operator*=(const Vector2d& vector)
{
	x *= vector.x;
	y *= vector.y;
	return *this;
}
Vector2d::operator string() 
{
	string s = "(" + to_string(x) + ";" + to_string(y) + ")";
	return s;
}
void main() 
{
	setlocale(LC_ALL, "Russian");
	Vector2d a(3, 5);
	cout << "������ a:" << endl;
	cout << "������� ���������� x:";
	a.setx();
	cout << "������� ���������� y:";
	a.sety();
	Vector2d b(4, 8);
	cout << "������ b:" << endl;
	cout << "������� ���������� x:";
	b.setx();
	cout << "������� ���������� y:";
	b.sety();
	Vector2d c = a + b;
	cout << "�������� ��������:";
	string s = c.operator std::string();
	cout << s << endl;
	c = a - b;
	cout << "�������� ��������:";
	s = c.operator std::string();
	cout << s << endl;
	double scal = a / b;
	cout << "��������� ������������ ��������:";
	cout << scal << endl;
	cout << "��������� ������� b �� �����" << endl;
	double ch;
	cout << "������� �����:";
	cin >> ch;
	c = b * ch;
	cout << "��������� ���������:";
	s = c.operator std::string();
	cout << s << endl;
	double tangens=a.tanAngle(b);
	cout << "������� ���� ����� ���������:";
	cout << tangens << endl;
	cout << "���������";
	c++;
	s = c.operator std::string();
	cout << s << endl;
	cout << "���������";
	c--;
	s = c.operator std::string();
	cout << s << endl;
	c += b;
	cout << "���������� �� ���������� ������� b:";
	s = c.operator std::string();
	cout << s << endl;
	c -= a;
	cout << "���������� �� ���������� ������� a:";
	s = c.operator std::string();
	cout << s << endl;
	cout << "��������� �� ������ b:" << endl;
	c *= b;
	s = c.operator std::string();
	cout << s << endl;
}