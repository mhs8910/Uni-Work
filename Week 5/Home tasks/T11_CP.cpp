#include<iostream>
using namespace std;
main()
{
    int number1, number2;
    int input=0, result;
    while (input<=6)
    {
        input++;
    cout<<"-----------------------------"<<endl;
    cout<<"----------Calculator---------"<<endl;
    cout<<"-----------------------------"<<endl;

    cout<<"Enter two Numbers : ";
    cin>>number1;
    cin>>number2;
    
    cout<<"1-Addition"<<endl;
    cout<<"2-Subtraction"<<endl;
    cout<<"3-Multiplication"<<endl;
    cout<<"4-Division"<<endl;
    cout<<"5-Exit"<<endl;

    cout<<"Enter your choice : "<<endl;
    cin>>input;

    if (input==1)
    {
        result=number1+number2;
    }
    else if (input==2)
    {
        result=number1-number2;
    }
    else if (input==3)
    {
        result=number1*number2;
    }
    else if (input==4)
    {
        result=number1/number2;
    }
    else if (input==5)
    {
        cout<<"You selected : Exit";
        break;
    }
    cout<<"The result after arithmetic operation is : "<<result<<endl;
    }
    
}