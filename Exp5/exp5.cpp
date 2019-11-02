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
	virtual void show();
	int getarea() {return getX()*getY(); }
private:
	int radius;
};

class Cylinder :public Circle {
public:
	virtual void show();
	int getH() { return height; }
	int getV() { return height*getarea(); }
private:
	int height;
};