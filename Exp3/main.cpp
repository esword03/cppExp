#include "Carlo.h"
using namespace std;

int main() {
	Carlo c;
	c.input();
	c.inputChange();
	return 0;
}
void Carlo::input() {
	cout << "����������� �۸�";
	cin >> weight >> value;
	cout << "����������";
	cin >> number;
	cout << "������Ʒ������Ϣ��" << endl;
}
void Carlo::inputChange() {
	int a=0;
	output(a);
	cin >> a;
	while (a != 0) {
		add(a);
		output(a);
		cin >> a;
	}
}
void Carlo::add(int a) {
	number = number + a;
}

void Carlo::output(int a) {
	if (a == 0) {
	}
	else if(a>0)
	{
		cout << "��Ʒ������" << a << "��" << endl;
	}
	else 
	{
		cout << "��Ʒ�۳���" << -a << "��" << endl;
	}
	cout << "��ǰ��Ʒ������Ϊ��" << weight*number
		<< "��Ʒ�ܼ�ֵΪ��" << value*number;
}