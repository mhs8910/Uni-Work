#include<iostream>
using namespace std;
void printreversearray(int arr[], int n)
{
    for (int i = n-1; i >=0; i--)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;  
}
main()
{
    int n;
    cout<<"Enter the number of elements : ";
    cin>>n;

    if (n<=0)
    {
        cout<<"Please Enter a valid Value : "<<endl;
        return 0;
    }
    
    int arr[n];

    cout<<n<<" Numbers one per line : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Numbers in reverse order : ";

    printreversearray(arr,n);
    return 0;
    

}