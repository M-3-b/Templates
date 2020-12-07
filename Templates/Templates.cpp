// CIS 1202 501
// Matthew Brinkman
// 12/6/2020

#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

template < class T>  
T half(T number)  
{ 
    if (number>3)
    {
        return number / 2;
    }
    else
    {
        return round(static_cast<float>(number)/2);
    }
}

int main()
{
    
    double a = 7.0;
    float b = 5.0f;
    int c = 3;

    cout << half(a) << endl;
    cout << half(b) << endl;
    cout << half(c) << endl;

    system("Pause");
    return(0);
}