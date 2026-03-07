#include<iostream>
using namespace std;
main()
{
    string shape;
    float area, length, width, radius;

    cout<<"Enter the name of the shape (in lower case letters) : ";
    cin>>shape;

    if(shape=="square")
    {
        cout<<"Enter the length of the square : ";
        cin>>length;
        area=length*length;
    }
    if(shape=="rectangle")
    {
        cout<<"Enter the length of the rectangle : ";
        cin>>length;
        cout<<"Enter the width of the rectangle : ";
        cin>>width;
        area=length*width;
    }
    if(shape=="circle")
    {
        cout<<"Enter the radius of the circle : ";
        cin>>radius;
        area=(22/7)*(radius*radius);
    }
    if(shape=="triangle")
    {
        cout<<"Enter the length of the triangle : ";
        cin>>length;
        cout<<"Enter the with of the triangle : ";
        area=0.5*length*width;
    }
    cout<<"The area of the "<<shape<<" is "<<area;
}