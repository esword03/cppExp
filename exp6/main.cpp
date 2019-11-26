#include"student.h"
int main() {
	student s;
	while (true) {
		s.input();
		cout << s;
	}
}
void student::input() {

	cout << "输入姓名 成绩：";
	cin >> name >> score;
}
ostream& operator<<(ostream& out, const student& stu) {
	string level;
	if (stu.score >= 90)
		level = "优";
	else if (stu.score >= 80)
		level = "良";
	else if (stu.score >= 70)
		level = "中";
	else if (stu.score >= 60)
		level = "及格";
	else
		level = "不及格";
	return out << "姓名 " << stu.name
				<< " 获得 " << level<<endl;
}