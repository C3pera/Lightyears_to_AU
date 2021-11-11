#include <iostream>

double convert(double);

using namespace std;

int main()
{
    double au, lu;
    cout << "Enter the number of light years: ";
    cin >> lu;
    au = convert(lu);
    cout << lu << " light years = ";
    cout << au << " astronomical units" << endl;
    return 0;
}

double convert(double lu)
{
    return lu * 63240;
}
