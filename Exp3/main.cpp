#include "Carlo.h"
using namespace std;

int main() {
	Carlo c;
	c.input();
	c.inputChange();
	return 0;
}
void Carlo::input() {
	cout << "输入货物重量 价格：";
	cin >> weight >> value;
	cout << "输入库存数：";
	cin >> number;
	cout << "输入商品买卖信息：" << endl;
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
		cout << "商品购进：" << a << "箱" << endl;
	}
	else 
	{
		cout << "商品售出：" << -a << "箱" << endl;
	}
	cout << "当前商品总重量为：" << weight*number
		<< "商品总价值为：" << value*number;
}