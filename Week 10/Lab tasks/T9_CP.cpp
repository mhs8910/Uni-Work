#include<iostream>
#include<conio.h>
using namespace std;

string timeTravel(int hours, int minutes)
{
	if((minutes+15)>59)
    {
        hours=hours+1;
        minutes=minutes-60;
    }
    else if ((minutes+15)<60)
    {
        minutes=minutes+15;
    }
    
    string resulthour=to_string(hours);
    string resultminute=to_string(minutes);

    return resulthour+":"+resultminute;
}
main()
{
    system("cls");
    int basehours, baseminutes;
    cout<<"Enter the present Hour : ";
    cin>>basehours;

    cout<<"Enter the minutes : ";
    cin>>baseminutes;

    string result=timeTravel(basehours, baseminutes);

    cout<<"The time after time travel will be "<<result;
}