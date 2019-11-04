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
	cout << "Բ�����꣺"; Point::show();
	cout << "Բ�뾶��" << getradius()<<endl;
}
void Cylinder::show() {
	Circle::show();
	cout << "Բ����߶ȣ�" << getH()<<endl;
}
void input() {
	int x;
	int y;
	int r;
	int h;
	cout << "��������� x��y��";
	cin >> x >> y;
	Point p(x, y);
	p.show();
	cout << "����Բ������ x��y�Ͱ뾶r��";
	cin >> x >> y >> r;
	Circle c(x,y,r);
	c.show();
	cout<< "����Բ������ x��y���뾶r�͸�h��";
	cin >> x >> y >> r >> h;
	Cylinder cy(x, y, r, h);
	cy.show();
	
}