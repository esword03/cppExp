#include"headC.h"
#include<vector>
vector<student>stu;
vector<teacher>tea;
vector<course>cou;
void input();

int main() {
	input();
}
void input() {
	int a;
	int flag = 0;
	while (flag==0) {
		cout << "1.���ѧ��" << endl
			<< "2.��ӽ�ʦ" << endl
			<< "3.��ӿγ�" << endl
			<< "4.��ʾ����ѧ��" << endl
			<< "5.��ʾ���н�ʦ" << endl
			<< "6.��ʾ���пγ�" << endl
			<< "0.��������" << endl
			<< "������ѡ�";
		cin >> a;
		if (a == 1) {
			string a;
			int b;
			string c;
			int d;
			cout << "���� ��� �༶ �ɼ���" << endl;
			cin >> a >> b>>c>>d;
			student *p = new student(a,b,c,d);
			stu.push_back(*p);
		}
		else if (a == 2) {
			string a;
			int b;
			string c;
			string d;
			cout << "���� ��� ְ�� ���ţ�" << endl;
			cin >> a >> b >> c >> d;
			teacher *p = new teacher(a, b, c, d);
			tea.push_back(*p);
		}
		else if (a == 3) {
			string a;
			string b;
			int c;
			int d;
			teacher e(0, 0, 0, 0);
			cout << "�γ̱�� �γ����� ѧʱ�� �ον�ʦ��" << endl;
			int flag2 = 0;
			while (flag2==0)
			{
				cin >> a >> b >> c >> d;
				for (auto p : tea) {
					if (p.getId() == d) {
						e = p;
						flag = 1;
						break;
					}
					else {
						cout << "������Ч��ʦ��ţ����������롣";
					}

				}
			}
			course *p = new course(e,a, b, c);
			cou.push_back(*p);
		}
		else if (a == 4) {
			for (auto p : stu) {
				p.print();
			}
		}
		else if (a == 5) {
			for (auto p : tea) {
				p.print();
			}
		}
		else if (a == 6) {
			for (auto p : cou) {
				p.print();
			}
		}
		else if (a == 0) {
			flag = 1;
		}
		else
		{
			cout << "�����ʽ�Ƿ������������롣" << endl;
			break;
		}
	}
}
person::person(string a = NULL, int b = 0) { name = a, id = b; }
student::student(string a=NULL,int b=0,string c=NULL,int d=0):person(a,b){
	squad=c;
	score = d;
}
teacher::teacher(string a = NULL, int b=0, string c = NULL, string d=NULL) : person(a, b) {
	level = c;
	position = d;
}
course::course(teacher d,string a = nullptr, string b = nullptr, int c = 0):Tno(d) {
	Cno=a;
	Cname = b;
	Chour = c;
}
void person::print() {
	cout << getName() <<" "<< getId() << " ";
}
void student::print() {
	person::print();
	cout << getSquad() <<" " << getScore() <<endl;
}
void teacher::print() {
	person::print();
	cout << getLevel() <<" "<< getPosition() << endl;
}
void course::print() {
	cout << getCno() <<" "<< getCname() <<" "<< getChour() <<" "<< getTeacher() << endl;
}

