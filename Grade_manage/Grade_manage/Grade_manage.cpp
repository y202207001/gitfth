#include <iostream>
#include "Student.h"
#include "cal.h"

int main()
{
    Student s;
    cal c;

    s.input();

    double avg = c.cal_average(s);
    char grade = c.getGrade(avg);

    s.print();
    std::cout << "평균: " << avg <<  std::endl;
    std::cout << "등급: " << grade << std::endl;

    return 0;
   
}

