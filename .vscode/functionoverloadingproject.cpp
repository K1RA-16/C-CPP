#include<iostream>

using namespace std;
int area(int,int);
float area(float);
float area(float,float);

int main()
{
    int l,b;
    float r,height,base;

    cout<<"\n enter the length and breadth of a rectangle";
    cin>>l>>b;

    cout<<"enter the radius of the circle";
    cin>>r;

    cout<<"enter the sides of the triangle";
    cin>>height>>base;

    cout<<"\nthe area of the rectangle is : "<<area(l,b);
    cout<<"\n the area of the circle is :"<<area(r);
    cout<<"\n the area of the tringle is :"<<area(height,base);

}

int area(int l,int b)
{

return(l*b);

}

float area(float r)
{

float x = 3.14*r*r;
return (x);

}

float area(float height,float base)
{
    int z = 0.5*height*base;
    return (z);
}
