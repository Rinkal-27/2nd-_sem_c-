#include<iostream>
#include<iomanip>
using namespace std;
class Vegetable
{
    string color;
public:
    void getdata() {
        cout<<"Enter color of Vegetable : ";
        cin>>color;
    }
    void putdata()  {cout<<"Color is "<<color<<endl;
    }

};

class Tomato:public Vegetable
{
    int wt,sizee;
public:
    void gtdata()  {
        cout<<"Enter weight and Size : ";
        cin>>wt>>sizee;
    }
    void ptdata()   { cout<<"Weight = "<<wt<<endl<<"Size ="<<sizee<<endl;}
};

int main()
{
    Tomato T;
    T.getdata();
    T.gtdata();
    T.putdata();
    T.ptdata();
}
