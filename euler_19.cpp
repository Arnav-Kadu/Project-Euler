#include <iostream>
using namespace std;

bool isLeapYear(int year) {
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

int countSundays() {
    int dayOfWeek = 2;
    int sundayCount = 0;
    
    for (int year = 1901; year <= 2000; ++year) {
        int monthsDays[12] = {31, 28 + isLeapYear(year), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        
        for (int month = 0; month < 12; ++month) {
            if (dayOfWeek == 0) {
                sundayCount++;
            }
            dayOfWeek = (dayOfWeek + monthsDays[month]) % 7;
        }
    }
    
    return sundayCount;
}

int main() {
    cout << countSundays() << endl;
    return 0;
}
