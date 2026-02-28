    #include <iostream>
using namespace std;
main()
{
    float i, p;
    float chance;

    cout<<"Enter the number of players : ";
    cin>>p;

    cout<<"Enter the number of Imposters (less than 3): ";
    cin>>i;

    chance=100*(i/p);
    cout<<"The chance of being an imposter is "<<chance<<"%";

    
}