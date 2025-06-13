#include <iostream>
#include "Student.h"
using namespace std;


void Student::input() {
	cout << "이름을 입력해주세요" << endl;
	cin >> name;
	cout << "수학점수를 입력해주세요" << endl;
	cin >> math;
	cout << "영어점수를 입력해주세요" << endl;
	cin >> english;
}

string Student::getName() {
	return name;
}

int Student::getMath() {
	return math;
}
int Student::getEnglish() {
	return english;
}

void Student::print() {
	cout << "이름: " << name << endl;
	cout << "수학: " << math << endl;
	cout << "영어: " << english<< endl;

}