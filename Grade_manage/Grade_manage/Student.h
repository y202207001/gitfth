#pragma once
#include <string>
class Student
{
private:
	std::string name;
	int math;
	int english;


public:
	Student();
	
	void input(); //����ڷκ��� �̸��� ���� �Է�
	std::string getName();
	int getMath();
	int getEnglish();
	void print(); //���� ���
};

