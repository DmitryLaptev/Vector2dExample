#pragma once
class Vector2d
{
private:
	double x, y;
public:
	Vector2d() { x = 0; y = 0; }
	Vector2d(double, double);
	Vector2d(double, double, double, double);
	//Vector2d(const Vector2d&);
	/*Vector2d(const Vector2d& vector2d) :
		x(vector2d.x), y(vector2d.y)
	{

	}*/
	//~Vector2d();
	void setx(double value) { x = value; };
	double getx() { return x; }
	void sety(double value) { y = value; }
	double gety() { return y; }
	void print(void);
	void sum(Vector2d);
	void sub(Vector2d);
	double scalarMult(Vector2d);
	void mult(double);
	double length();
	double tanAngle(Vector2d);
};

