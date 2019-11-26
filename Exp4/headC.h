#pragma once
#include<iostream>
#include<string>
using namespace std;
class person {
public:
	//person();
	person(string  , int  );
	void print();
	string getName() { return name; }
	int getId() { return id; }
private:
	string name;
	int id;
};
class student :public person {
public:
	//student();
	student(string  , int ,string,int );
	string getSquad() { return squad; }
	int getScore() { return score; }
	void print();
private:
	string squad;
	int score;
};
class teacher :public person {
public :
	//teacher() {};
	teacher(string , int ,string ,string );
	string getLevel() { return level; }
	string getPosition() { return position; }
	void print();
private:
	string level;
	string position;
};
class course {
public:
	course(teacher,string, string, int );
	void print();
	string getCno() { return Cno; }
	string getCname() { return Cname; }
	int getChour() { return Chour; }
	string getTeacher() { return Tno.getName(); }
private:
	string Cno;
	string Cname;
	int Chour;
	teacher Tno;
};