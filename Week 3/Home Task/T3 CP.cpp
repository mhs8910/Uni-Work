#include<iostream>
using namespace std;
main()
{
    int final_velocity, initial_velocity, acceleration, time;

    cout<<"Enter the initial velocity : ";
    cin>>initial_velocity;

    cout<<"Enter the acceleration : ";
    cin>>acceleration;
    
    cout<<"Enter the time : ";
    cin>>time;

    final_velocity=initial_velocity+(acceleration*time);

    cout<<"The final velocity of the body is : "<<final_velocity;

}