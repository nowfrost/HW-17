#include<iostream>

class Saw
{
private:
	int a;
	int b;

public:
	Saw() : a(0), b(0)
	{}
	Saw(int a1, int b1) : a(a1), b(b1)
	{}
	void show()
	{
		std::cout << "\n" << a << " " << b;
	}
};

class Vector
{
public:
	Vector() : x(0),y(0), z(0)
	{}
	Vector(int _x, int _y, int _z) :x(_x), y(_y), z(_z)
	{}
	int Getx()
	{
		return x;
	}
	void show()
	{
		std::cout << "\n" << x << " " << y << " " << z;
	}
private:
	int x;
	int y;
	int z;
};


int main()
{
	Saw v(15, 25);
	v.show();

	Vector s(10, 20, 30);
	s.show();
}