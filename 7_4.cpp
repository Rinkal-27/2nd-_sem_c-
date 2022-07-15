#include<iostream>
#include<iomanip>
using namespace std;
class Celsius
{
    float temp;
public:
    Celsius() {temp=30;}
    Celsius(float x) {temp=x;}
    void put(){cout<<"Temp = "<<temp<<endl;}
    operator float()
    {
        return temp;
    }
};

int main()
{
    class Celsius C1;
    float x=30.5;
    C1=x;   //basic to class
    cout<<"Basic to class"<<endl;
    C1.put();

    //Class to basic
    class Celsius C2(59.4);
    float temperature;
    temperature=C2;
    cout<<"Class to basic  "<<endl;
    cout<<"Temperature : "<<temperature<<endl;

}
