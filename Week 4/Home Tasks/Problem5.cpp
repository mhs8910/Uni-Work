#include<iostream>
using namespace std;
main()
{
    int holidays, workingdays, timeforgames, difference;
    
    cout<<"Enter the total number of holidays : ";
    cin>>holidays;

    workingdays=365-holidays;
    timeforgames=(workingdays*63)+(holidays*127);
    difference=30000-timeforgames;
    
    int hours=difference/60;
    int minutes=difference%60;

    if(timeforgames>30000)
    {
        cout<<"Tom will run away"<<endl;
        cout<<hours<<" hours "<<minutes<<" minutes less to sleep";
    }
    else
    {
        cout<<"Tom is sleeping well"<<endl;
        cout<<hours<<" hours "<<minutes<<" minutes more to sleep";
    }
}