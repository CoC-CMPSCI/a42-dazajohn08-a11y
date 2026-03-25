
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

    if (weight <= 0 || weight > 20){
    cout << "Error: weight must be > 0 and <= 20." << endl;
    return 0;
    }
    
    if (distance < 10 || distance > 3000){
    cout << "Error: distance must be >= 10 and <= 3000." << endl;
    return 0;
    }
    
    if (weight <= 2) dRate = RATE2;
    else if (weight <= 6) dRate = RATE6;
    else if (weight <= 10) dRate = RATE10;
    else dRate = RATE20;
    
    if (distance > 500){
        price = (distance / 500.00) *dRate;
    } else {
        price = dRate;
    }

    cout << setprecision(2) << fixed;
    cout << "The shipping price for package is " << price << endl;

    return 0;
}
