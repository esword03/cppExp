#pragma once
#include<iostream>
#include<string>
using namespace std;
class person {
public:
	//person();
	person(string  , int  );
	void print();
	string getName();
	int getId();
private:
	string name;
	int id;
};
class student :public person {
public:
	//student();
	student(string  , int ,string,int );
	string getSquad();
	int getScore();
	void print();
private:
	string squad;
	int score;
};
class teacher :public person {
public :
	//teacher();
	teacher(string , int ,string ,string );
	string getLevel();
	string getPosition();
	void print();
private:
	string level;
	string position;
};
class course {
public:
	course(string, string, int, int);
	void print();
private:
	string Cno;
	string Cname;
	int Chour;
	teacher Tno;
};