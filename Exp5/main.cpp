#include"exp5.h"
using namespace std;
void input();
int main() {
	input();
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
void input() {
	int x;
	int y;
	int r;
	int h;
	cout << "输入点坐标 x，y：";
	cin >> x >> y;
	Point p(x, y);
	p.show();
	cout << "输入圆心坐标 x，y和半径r：";
	cin >> x >> y >> r;
	Circle c(x,y,r);
	c.show();
	cout<< "输入圆心坐标 x，y，半径r和高h：";
	cin >> x >> y >> r >> h;
	Cylinder cy(x, y, r, h);
	cy.show();
	
}