#include <iostream>
#include "Student.h"
using namespace std;


void Student::input() {
	cout << "�̸��� �Է����ּ���" << endl;
	cin >> name;
	cout << "���������� �Է����ּ���" << endl;
	cin >> math;
	cout << "���������� �Է����ּ���" << endl;
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
	cout << "�̸�: " << name << endl;
	cout << "����: " << math << endl;
	cout << "����: " << english<< endl;

}