#pragma once
using namespace std;
#include <string>
#include <iostream>
class Vector2d
{
private:
	double x, y;
public:
	//методы
	Vector2d() { x = 0; y = 0; }
	Vector2d(double, double);
	Vector2d(double, double, double, double);
	//Vector2d(const Vector2d&);
	Vector2d(const Vector2d& vector2d) :
		x(vector2d.x), y(vector2d.y)
	{

	}
	~Vector2d() 
	{
		cout << "Enabled" << endl;
	}
	void setx() { cin >> x; };
	double getx() { return x; }
	void sety() { cin >> y; }
	double gety() { return y; }
	void print(void);

	Vector2d* sum(Vector2d);
	Vector2d* sub(Vector2d);
	double scalarMult(Vector2d);
	Vector2d* mult(double);
	double length();
	double tanAngle(Vector2d);
	
	//перегрузка
	Vector2d operator+(const Vector2d& v);
	Vector2d operator-(const Vector2d& v);
	double operator/(Vector2d v);
	friend Vector2d operator*(Vector2d&, double);
	Vector2d& operator++();
	Vector2d operator++(int);
	Vector2d& operator--();
	Vector2d operator--(int);
	const Vector2d& operator+=(const Vector2d&);
	const Vector2d& operator-=(const Vector2d&);
	const Vector2d& operator*=(const Vector2d&);
	operator string();
};

