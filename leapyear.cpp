#include<iostream>

using namespace std;

int main()
{
    int year;
    cin>>year;

    if(year%4==0 && year%100!=0)
    {
        cout<<"the year is leap year";

    }
    else if(year%400==0)
    {
        cout<<"the year is a leap year";

    }
    else
    {
        cout<<"the given year is not a leap year";

    }

    return 0;
}