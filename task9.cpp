#include <iostream>
using namespace std;

void tpChecker(int people, int tp);

int main() {
    int x, y;
    cout << "Number of people in the household: ";
    cin >> x;
    cout << "Number of rolls of TP: ";
    cin >> y;
    tpChecker(x, y);
}

void tpChecker(int people, int tp) {
    int sheets_per_roll = 500;
    int sheets_per_person_per_day = 57;
    int total_sheets_per_day=people*57;
    int total_sheets_available=tp*500;
    int total_days_used=total_sheets_available/total_sheets_per_day;
  

    if (total_days_used < 14) {
        cout << "Your TP will only last " << total_days_used << " days, buy more!";
    } if ((total_days_used >= 14)){
        cout << "Your TP will last " << total_days_used << " days, no need to panic!";
    }
}