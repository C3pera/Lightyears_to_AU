#include <iostream>

double convert(double);
using namespace std;

int main()
{
    double au, lu;
    cout << "Введите количество световых лет: ";
    cin >> lu;
    au = convert(lu);
    cout << lu << " Световых лет = ";
    cout << au << " астрономических едениц" << endl;
    return 0;
}

double convert(double lu)
{
    return lu * 63240;
}