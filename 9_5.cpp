#include<iostream>
#include<iomanip>
using namespace std;
class Vehicle
{
    float average;
public:
    void virtual getdata()=0;
    void virtual putdata()=0;
    float givavg() {
        average=10;
        return average;}
};
class car:public Vehicle
{
    string fueltype;
    int wheels;
public:
    void getdata(){
    cout<<"Enter fuel type & no of wheels for car :";
    cin>>fueltype>>wheels;
    }
    void putdata(){
    cout<<endl<<"Average : "<<givavg()<<endl<<"FUEL TYPE OF CAR :"<<fueltype<<endl<<"NO OF WHEELS :"<<wheels<<endl;}
};
class truck:public Vehicle
{
    string fueltype;
    int wheels;
public:
    void getdata(){
    cout<<"Enter fuel type & no of wheels for truck :";
    cin>>fueltype>>wheels;}
    void putdata(){
    cout<<endl<<"Average : "<<givavg()<<endl<<"FUEL TYPE OF TRUCK :"<<fueltype<<endl<<"NO OF WHEELS :"<<wheels<<endl;}
};
main()
{
    car C1,C2;
    truck T1,T2;
    C1.getdata();
    C2.getdata();
    T1.getdata();
    T2.getdata();
    C1.putdata();
    C2.putdata();
    T1.putdata();
    T2.putdata();

}
