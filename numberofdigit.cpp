#include<iostream>
using namespace std;
int main()
{
    int n,count=0,i;

    cout<<"enter the number you want to find its digits "<<endl;
    cin>>n;

    while(n>0)
    {
        n=n/10;
        count++;
    }
    cout<<"number of digits is "<<count;
    
    return 0 ;

}