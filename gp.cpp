#include<iostream>
#include <math.h>

using namespace std;

int main()
{
int a,r,n,ans;

cout<<"enter the first term of the gp"<<endl;
cin>> a;

cout<<"enter the common diffrence you want in the gp"<<endl;
cin>>r;

cout<<"enter the number of terms you want in your gp"<<endl;
cin>>n;

ans = a*(pow(r,n-1));

cout<<" the last number is  "<<ans;

return 0 ;

}