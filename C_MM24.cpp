#include <iostream>
#include <iomanip>

using namespace std;

double calculateSalary(int hours, int hourlyRate) {
    double salary = 0.0;
    
    if (hours > 120) {
        salary += (hours - 120) * hourlyRate * 1.66;
        hours = 120;
    }
    if (hours > 60) {
        salary += (hours - 60) * hourlyRate * 1.33;
        hours = 60;
    }
    salary += hours * hourlyRate;
    
    return salary;
}

int main() {
    int hours, hourlyRate;
    cin >> hours >> hourlyRate;
    
    double salary = calculateSalary(hours, hourlyRate);
    
    // 設定輸出格式，固定小數點，保留一位小數
    cout << fixed << setprecision(1);
    cout << salary << endl;
    
    return 0;
}