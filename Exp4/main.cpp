#include"headC.h"
#include<vector>
vector<student>stu;
vector<teacher>tea;
vector<course>cou;
void input();

int main() {
	
}
void input() {
	int a;
	while (true) {
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
			cout << "�γ̱�� �γ����� ѧʱ�� �ον�ʦ��" << endl;
			course *p = new course(a, b, c, d);
			cou.push_back(*p);
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
course::course(string a = nullptr, string b = nullptr, int c = 0, int d = 0) {
	Cno=a;
	Cname = b;
	Chour = c;
	//��һ�����������������ҵ�Ŀ���ŵĽ�ʦ������
}