#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;

main()
{
    system("cls");
    int distance, angleofelevation;
    double height;

    cout<<"Enter the horizontal ditance to the tree : ";
    cin>>distance;

    cout<<"Enter the angle of elevation in degrees : ";
    cin>>angleofelevation;

    double angleinradian=angleofelevation / 57.2958;

    height = distance * tan(angleinradian);

    cout<<"The height of the tree is : "<<height;
}