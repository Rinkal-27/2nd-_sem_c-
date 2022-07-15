#include<iostream>
using namespace std;
class Rectangle
{
   // public:
       int w,h;
       public:
       void get_values();
       void area();

};
void Rectangle :: get_values()
{
           cout<<"Enter the values of height and width :";
           cin>>h>>w;

}
void Rectangle :: area()
{
           long A;
           A=w*h;
           cout<<"Area = "<<A;
}
int main()
{
    Rectangle R,S;
    R.get_values();
    R.area();
    //S.w=10;
    return 0;
}
