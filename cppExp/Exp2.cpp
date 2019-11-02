#include<iostream>
#include<sstream>
#include<string>
#include<fstream>
using namespace std;
class Student {
public:
	Student() {};
	Student(const char* s) {
		out.open(s, ios::app);
	}
	void read();
	void fileInput();
	int getScore() {
		return this->score;
	}
	string getId() {
		return this->id;
	}

private:
	string id;
	int score;
	ifstream in;
	ofstream out;
};
Student* max(Student**, int a);
static void startArray(int);


Student **stu;
int main() {
	int a = 0;
	cin >> a;
	startArray(a);
	for (int b = 0; b<a; b++) {
		Student *student = new Student("test.dat");
		student->read();
		student->fileInput();
		*(stu + b) = student;
	}
	Student* stud = max(stu, a);
	cout << stud->getId() << " " << stud->getScore();
}

void Student::read() {
	cin >> id >> score;
}
void Student::fileInput() {
	out << id << " " << score << endl;
}

Student* max(Student **s, int a) {
	//int b=0;
	Student* student = *(s);
	for (int c = 1; c<a; c++) {
		Student* pStudent = *(s + c);
		if (pStudent->getScore() > student->getScore()) {
			student = pStudent;
		}
	}
	return student;
}

static void startArray(int a) {
	//cin>>a;
	stu = new Student *[a];
}

