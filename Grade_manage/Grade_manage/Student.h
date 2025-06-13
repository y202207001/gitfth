#pragma once
#include <string>
class Student
{
private:
	std::string name;
	int math;
	int english;


public:

	
	void input(); //사용자로부터 이름과 점수 입력
	std::string getName();
	int getMath();
	int getEnglish();
	void print(); //정보 출력
};

