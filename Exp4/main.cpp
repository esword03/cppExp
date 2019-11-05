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
		cout << "1.添加学生" << endl
			<< "2.添加教师" << endl
			<< "3.添加课程" << endl
			<< "4.显示所有学生" << endl
			<< "5.显示所有教师" << endl
			<< "6.显示所有课程" << endl
			<< "0.结束程序" << endl
			<< "请输入选项：";
		cin >> a;
		if (a == 1) {
			string a;
			int b;
			string c;
			int d;
			cout << "姓名 编号 班级 成绩：" << endl;
			cin >> a >> b>>c>>d;
			student *p = new student(a,b,c,d);
			stu.push_back(*p);
		}
		else if (a == 2) {
			string a;
			int b;
			string c;
			string d;
			cout << "姓名 编号 职称 部门：" << endl;
			cin >> a >> b >> c >> d;
			teacher *p = new teacher(a, b, c, d);
			tea.push_back(*p);
		}
		else if (a == 3) {
			string a;
			string b;
			int c;
			int d;
			cout << "课程编号 课程名称 学时数 任课教师：" << endl;
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
	//下一步工作：遍历数组找到目标编号的教师姓名。
}