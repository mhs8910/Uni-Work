#include<iostream>
using namespace std;

void display(int carData[5][5])
{   
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<carData[i][j]<<" ";
        }
        cout<<endl;
    }
}
void toyotaBluecars(int carData[5][5])
{
        cout<<carData[1][3]<<endl;
}
int totalredcars(int carData[5][5])
{
    int total=0;
    for(int i=0;i<5;i++)
    {
        total=total+carData[i][0];
    }
    return total;
}
int totalnissancars(int carData[5][5])
{
    int total=0;
    for(int i=0;i<5;i++)
    {
        total=total+carData[i][2];
    }
    return total;
}
int converter(string color, int carData[5][5])
{
    int total=0;
    if(color=="red")
    {
        for (int i = 0; i < 5; i++)
        {
            total=total+carData[0][i];
        }
        
        return total;
    }
    else if(color=="black")
    {
        for (int i = 0; i < 5; i++)
        {
            total=total+carData[1][i];
        }
        return total;
    }
    else if(color=="brown")
    {
        for (int i = 0; i < 5; i++)
        {
            total=total+carData[2][i];
        }
        return total;
    }
    else if(color=="blue")
    {
        for (int i = 0; i < 5; i++)
        {
            total=total+carData[3][i];
        }
        return total;
    }
    else if(color=="grey")
    {
        for (int i = 0; i < 5; i++)
        {
            total=total+carData[4][i];
        }
        return total;
    }
    else
    {
        return -1;
    }
}
void transpose(int carData[5][5])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            // Transpose logic here
             cout<<carData[j][i]<<" ";
        }
        cout<<endl;
    }
    
}
int main()
{
    int carData[5][5]={//Data of 25 cars, 1-25
        {1,2,3,4,5},//First row suzki cars
        {6,7,8,9,10},//Second row Totoyta cars
        {11,12,13,14,15},//third row nisan cars
        {16,17,18,19,20},//fourth row BMW cars
        {21,22,23,24,25}//fifth row Audi cars
    };
    display(carData);
    cout<<"Toyota Blue Cars: "<<endl;
    toyotaBluecars(carData);
    cout<<"Total Red Cars: "<<totalredcars(carData)<<endl;

    cout<<"Enter the color of the cars you want to know: "<<endl;
    string color;
    cin>>color;
    converter(color,carData);
    if (converter(color,carData)==-1)
    {
        cout<<"Invalid color entered."<<endl;
    }
    else
    {
        cout<<"Total "<<color<<" Cars: "<<converter(color, carData)<<endl;
    }

    cout<<"Transposed Car Data: "<<endl;
    transpose(carData);
     return 0;
    
}
