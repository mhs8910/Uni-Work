#include<iostream>
using namespace std;
main()
{
    int points, wins, draws, losses;
    
    cout<<"Enter the number of wins of the team : ";
    cin>>wins;

    cout<<"Enter the number of draws of the team : ";
    cin>>draws;

    cout<<"Enter the number of losses of the team : ";
    cin>>losses;

    points=(wins*3)+(draws*2)+(losses*0);
    
    cout<<"The points of the team are :"<<points;
}