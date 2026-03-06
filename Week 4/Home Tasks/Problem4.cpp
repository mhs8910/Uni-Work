#include<iostream>
using namespace std;
main()
{
    float redrosesprice=2, whiterosesprice=4.1, tulipsprice;
    float nredroses, nwhiteroses, ntulips;
    float originalprice, discountprice;

    cout<<"Red Roses : ";
    cin>>nredroses;
    
    cout<<"White roses : ";
    cin>>nwhiteroses;

    cout<<"Tulips : ";
    cin>>ntulips;

    originalprice=nredroses+nwhiteroses+ntulips;

    if(originalprice>200)
    {
        discountprice=originalprice-(0.2*originalprice);

        cout<<"Original Price : "<<originalprice<<endl;
        cout<<"Discounted Price : "<<discountprice;
    }
    else
    {
        discountprice=originalprice;
        cout<<"Total Price : "<<originalprice;
    }
}