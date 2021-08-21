#include<iostream>

using namespace std;

int main()
{
    int n=0,i=0;
    cout<<"enter the number";
    cout<<endl;
    cin>>n;

    for(int i =2;i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<"the smallest divisior is "<<i;
            break;

        }

    }
    return 0;
}

