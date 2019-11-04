#include<iostream>
class Point {
public:
    Point(int,int);

    virtual void show();
    int getX() { return x; }
    int getY() { return y; }
private:
    int x;
    int y;
};
class Circle :public Point {
public:
    Circle(int,int,int);
    virtual void show();
    int getarea() {return 3.14*(radius*radius); }
    int getradius() { return radius; }
private:
    int radius;
};

class Cylinder :public Circle {
public:
    Cylinder(int, int, int, int);
    virtual void show();
    int getH() { return height; }
    int getV() { return height*getarea(); }
private:
    int height;
};
