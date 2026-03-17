#include<iostream>
using namespace std;
main()
{
    int num1, num2, gcd, lcm;

    cout<<"Enter two numbers: ";
    cin>>num1>>num2;
    int min=(num1<num2)?num1:num2;

    for(int i = min; i >= 1; i--)
    {
        if(num1 % i == 0 && num2 % i == 0)
        {
            gcd = i;
            break;
        }
    }

    lcm = (num1 * num2) / gcd;

    cout << "GCD (HCF) = " << gcd << endl;
    cout << "LCM = " << lcm << endl;
}