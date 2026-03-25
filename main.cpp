
//?  [Problem Definition]
//*     Write a program that asks for the weight of the package and
//*     the distance it is to be shipped, and then displays the charges.
//*
//*  The Fast Freight Shipping Company charges the following rates:
//*     Weight of Package (in Kilograms)          Rate per 500 Miles Shipped
//*        2 kg or less                              $1.10
//*        Over 2 kg but not more than 6 kg          $2.20
//*        Over 6 kg but not more than 10 kg         $3.70
//*        Over 10 kg but not more than 20 kg        $4.80
//*
//** Input Validation :
//* 	Do not accept values of 0 or less for the weight of the package.
//* 	Do not accept weights of more than 20 kg (this is the maximum weight the company will ship).
//* 	Do not accept distances of less than 10 miles or more than 3,000 miles.
//*     These are the company's minimum and maximum shipping distances.

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

    cout << "Enter the package weight and distance\n";
    cin >> weight >> distance;

    // TODO: validate input - weight must be > 0 and <= 20
    if (weight <= 0 || weight > 20) {
    cout << "Error: weight must be > 0 and <= 20." << endl;
    return 0;
    }
    // TODO: validate input - distance must be >= 10 and <= 3000
    if (distance < 10 || distance > 3000) {
    cout << "Error: distance must be >= 10 and <= 3000." << endl;
    return 0;
    }
    // TODO: determine rate based on weight
    if (weight <= 2) {
        dRate = RATE2;
    } else if (weight <= 6) {
        dRate = RATE6;
    } else if (weight <= 10) {
        dRate = RATE10;
    } else {
        dRate = RATE20;
    }
    // TODO: calculate price based on distance
    if (distance > 500) {
        price = (distance / 500.0) * dRate;
    } else {
        price = dRate;
    }
    // Use the following statements to print output
    cout << setprecision(2) << fixed;
    cout << "The shipping price for package is " << price << endl;

    return 0;
}
