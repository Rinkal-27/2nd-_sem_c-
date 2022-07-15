#include<iostream>
using namespace std;
int &tonlarge(int &x,int &y)
{
    if(x>y)
        return x;
    else
        return y;
}
int main()
{
    int a,b;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;
    tonlarge(a,b)=100;
    cout<<"First number is : "<<a<<endl;
    cout<<"Second number is : "<<b<<endl;
    cout<<"So the larger number is set to : "<<tonlarge(a,b);
    return 0;
}
