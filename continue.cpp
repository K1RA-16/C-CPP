#include<iostream>
using namespace std;

int main()
{
    int n,x,i;
    cout<<"enter the number"<<endl;
    cin>>n;

    cout<<"enter x:"<<endl;
    cin>>x;

    for(int i = 1;i<=n;i++)
    {
        if(i%x==0)
        {
         continue;

        }
        cout<<i<<" ";
        

    }
    return 0;
}