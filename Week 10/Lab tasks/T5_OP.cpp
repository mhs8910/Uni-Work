#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;
main()
{
    system("cls");
    int a, b, c;
    cout<<"ax^2 + bx + c = 0"<<endl;
    cout<<"Enter the value of a : ";
    cin>>a;
    cout<<"Enter the value of b : ";
    cin>>b;
    cout<<"Enter the value of c : ";
    cin>>c;
    double discriminant = b*b - 4*a*c;
    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2*a);
        double root2 = (-b - sqrt(discriminant)) / (2*a);
        cout << "The roots are real and different." << endl;
        cout << "Root 1: " << root1 << endl;
        cout << "Root 2: " << root2 << endl;
    } else if (discriminant == 0) {
        double root = -b / (2*a);
        cout << "The roots are real and equal." << endl;
        cout << "Root: " << root << endl;
    } else {
        cout << "The roots are complex and different." << endl;
        cout << "Root 1: " << -b / (2*a) << " + " << sqrt(-discriminant) / (2*a) << "i" << endl;
        cout << "Root 2: " << -b / (2*a) << " - " << sqrt(-discriminant) / (2*a) << "i" << endl;
    }
}