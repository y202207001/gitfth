
#include "cal.h"

double cal::cal_average( Student& s) {
    return (s.getMath() + s.getEnglish()) / 2.0;
}

char cal::getGrade(double avg) {
    if (avg >= 90) {
        return 'A';
    }
    else if (avg >= 80) {
        return 'B';
    }
    else if (avg >= 70) {
        return 'C';
    }
    else {
        return 'F';
    }

}
