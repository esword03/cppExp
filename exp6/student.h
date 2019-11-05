#pragma once
#include<string>
#include<iostream>
using namespace std;
class student {
public:
	friend ostream& operator<<(ostream&, const student&);
	void input();
private:
	string name;
	int score;
};