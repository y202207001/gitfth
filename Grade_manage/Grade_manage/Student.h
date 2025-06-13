#pragma once
class Student
{
private:
	string name;
	int math;
	int english;


public:
	Student();
	
	void input(); //사용자로부터 이름과 점수 입력
	string getName();
	int getMath();
	int getEnglish();
	void print(); //정보 출력
};

