#include<iostream>
using namespace std;
int main()
{
    int start , ans , i, a,b ;

    cout<<"enter the numbers :";
    cin>>a>>b;

    start = max(a,b);
    int end = (a*b);

    ans = start;

    for(i=start;i<end;i++)
    {
        if(i%a==0 && i%b==0)
        {
            ans = i;
            break;

        }

    }
    cout<<"the lcm of a "<<a<<" and b "<<b<<" is "<<ans;
    return 0;
     
}