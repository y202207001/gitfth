#pragma once
class Student
{
private:
	string name;
	int math;
	int english;


public:
	Student();
	
	void input(); //����ڷκ��� �̸��� ���� �Է�
	string getName();
	int getMath();
	int getEnglish();
	void print(); //���� ���
};

