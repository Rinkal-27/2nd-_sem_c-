#include<iostream>
#include<iomanip>
using namespace std;
class Medicine
{
    string tom,cname,dom;
public:
    void input()
    {
        cout<<"Enter type of medicine, name of company & date of manufacturing :";
        cin>>tom>>cname>>dom;
    }
    void output()
    {
        cout<<"Type of medicine  "<<tom<<endl<<"Name of company "<<cname<<endl<<"Date of manufacturing :"<<dom<<endl;
    }
};
class Tablet:public Medicine
{
    string nameot;
    int quan,price;
public:
    void input()
    {
        Medicine::input();
        cout<<"Enter Name of tablet , quantity per pack & price :";
        cin>>nameot>>quan>>price;
    }
    void output()
    {
        Medicine::output();
        cout<<"Name of tablet "<<nameot<<endl<<"Quantity per pack "<<quan<<endl<<"Price :"<<price<<endl;
    }
};
class Syrup:public Medicine
{
    int qpb,dose;
public:
    void input()
    {
        Medicine::input();
        cout<<"Enter quantity per bottle & dosage unit :";
        cin>>qpb>>dose;

    }
    void output()
    {
        Medicine::output();
        cout<<"Quantity per bottle : "<<qpb<<endl<<"Dosage unit : "<<dose<<endl;

    }
};
int main()
{
    Tablet T;
    T.input();
    T.output();
    Syrup S;
    S.input();
    S.output();

}

