#include<iostream>
using namespace std;
main()
{
float agg, matric, inter, ecat ;

cout<<"Enter matric marks : ";
cin>>matric;

cout<<"Enter inter Marks : ";
cin>>inter;

cout<<"Enter ecat Marks : ";
cin>>ecat;

agg= ((matric/1100)*10+(inter/1200)*40+(ecat/400)*50);
cout<<"Your aggregrate is : "<<agg;


}
