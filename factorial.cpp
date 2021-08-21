#include<iostream>
using namespace std;

int main()
{
 int i,ans=1,n;
 cout<<"enter the number whose factorial you want to find "<<endl;
 cin>>n;

 while(n>0)
 {
     ans = ans*n;
     n--;

 }   
 cout<<"the factorial of the number is "<<ans;
 return 0 ;
 
}