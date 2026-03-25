#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double RATE2  = 1.10;
    const double RATE6  = 2.20;
    const double RATE10 = 3.70;
    const double RATE20 = 4.80;

    double weight, distance, dRate, price;
    cout << "Package weight and distance\n";
    cin >> weight >> distance;

    if (weight <= 0 || weight > 20)
    {
        cout << "Invalid input" << endl;
        return 1;
    }

    if (distance < 10 || distance > 3000)
    {
        cout << "Invalid input" << endl;
        return 1;
    }

    if (weight <= 2)
        dRate = RATE2;
    else if (weight <= 6)
        dRate = RATE6;
    else if (weight <= 10)
        dRate = RATE10;
    else
        dRate = RATE20;

    int segments = (distance + 499) / 500;
    price = segments * dRate;

    cout << setprecision(2) << fixed;
    cout << "The shipping price for package is " << price << endl;

    return 0;
}