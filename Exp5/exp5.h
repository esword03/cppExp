#include<iostream>
class Point {
public:
	Point(int,int);
	void show();
	int getX() { return x; }
	int getY() { return y; }
private:
	int x;
	int y;
};
class Circle :public Point {
public:
	Circle(int,int,int);
	void show();
	int getarea() {return getX()*getY(); }
	int getradius() { return radius; }
private:
	int radius;
};

class Cylinder :public Circle {
public:
	Cylinder(int, int, int, int);
	void show();
	int getH() { return height; }
	int getV() { return height*getarea(); }
private:
	int height;
};