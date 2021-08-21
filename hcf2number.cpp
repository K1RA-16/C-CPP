#include<iostream>
using namespace std;

int main()
{
    int i,a,b,ans = 1,x;
    cout<<"enter two numbers "<<endl;
    cin>>a>>b;

     x=min(a,b);
    
    for(i=1;i<=x;i++)
    {
        if(a%i==0 && b%i==0)
        {
            ans = i;

        }
    }
    cout<<ans;
    return 0;

}