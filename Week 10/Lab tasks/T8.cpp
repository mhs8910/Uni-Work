#include<iostream>
using namespace std;

string evenishoroddish(int number)
{	
	int quot=number, rem, sum;
	while(quot!=0)
	{
		rem=quot%10;
		quot=quot/10;
		sum=sum+rem;	
	}
	if(sum%2==0)
	{
		return "evenish";
	}
	else if (sum%2!=0)
    {
        return "oddish";
    }
}

main()
{
	int number;
	cout<<"Enter a number : ";
	cin>>number;
	
	cout<<"The Number is "<<evenishoroddish(number);
}