#include"student.h"
int main() {
	student s;
	while (true) {
		s.input();
		cout << s;
	}
}
void student::input() {

	cout << "�������� �ɼ���";
	cin >> name >> score;
}
ostream& operator<<(ostream& out, const student& stu) {
	string level;
	if (stu.score >= 90)
		level = "��";
	else if (stu.score >= 80)
		level = "��";
	else if (stu.score >= 70)
		level = "��";
	else if (stu.score >= 60)
		level = "����";
	else
		level = "������";
	return out << "���� " << stu.name
				<< " ��� " << level<<endl;
}