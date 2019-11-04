#include"exp5.h"
#include<vector>
using namespace std;
void input(Point*);
int main() {
	Point* p;
	input(p);
}
Point::Point(int a=0, int b=0) {
	x = a;
	y = b;
}
Circle::Circle(int a,int b,int c):Point(a,b) {
	radius = c;
}
Cylinder::Cylinder(int a, int b, int c, int d) : Circle(a, b, c) {
	height = d;
}
void Point::show() {
	cout << "(" << getX() << "," << getY() <<")"<< endl;
}
void Circle::show() {
	cout << "圆心坐标："; Point::show();
	cout << "圆半径：" << getradius()<<endl;
}
void Cylinder::show() {
	Circle::show();
	cout << "圆柱体高度：" << getH()<<endl;
}
void input(Point* p) {
	int value;
	vector<int> a;
	cin >> value;
	a.push_back(value);
	while (cin.get() != '\n') {
		cin >> value;
		a.push_back(value);
	}
	if (a.size() == 2)
		p = new Point(a[0], a[1]);
	else if (a.size() == 3)
		p = new Circle(a[0], a[1], a[2]);
	else if (a.size() == 4)
		p = new Cylinder(a[0], a[1], a[2], a[3]);
}