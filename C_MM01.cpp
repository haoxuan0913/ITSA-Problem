#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
	int upper, bottom, hight;
	cin >> upper >> bottom >> hight;
    double area = (static_cast<double>(upper + bottom)*(hight))/2.0;
    cout << fixed << setprecision(1) << "Trapezoid area:" << area << endl;
	return 0;
}
