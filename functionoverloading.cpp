/* A programme to display the use of function overloading */

#include<iostream>
using namespace std;
int sum(int a,int b)
{
    cout<<"sum = "<<a+b;

}
double sum(double a, double b)
{
    cout<<"sum = "<<a+b;

}
int main()
{
    int x,y;
    cout<<"enter 2 numbers to print their sum";
    cin>>x>>y;
    sum(x,y);
    cout<<"\n";
    sum(x,y);

}