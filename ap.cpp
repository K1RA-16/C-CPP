#include<iostream>

using namespace std;

int main()
{
int a,d,n,ans;

cout<<"enter the first term of the AP"<<endl;
cin>> a;

cout<<"enter the common diffrence you want in the AP"<<endl;
cin>>d;

cout<<"enter the number of terms you want in your AP"<<endl;
cin>>n;

ans = a + (n-1)*d;

cout<<" the last number is  "<<ans;

return 0 ;

}