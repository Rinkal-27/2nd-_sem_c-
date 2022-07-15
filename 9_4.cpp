#include<iostream>
using namespace std;
class Media
{
    string title;
    float price;
public:
    Media(string t,float p){
    title=t;
    price=p;}
    virtual display(){cout<<"Title= "<<title<<endl<<"Price= Rs."<<price<<endl;}
};
class Book:public Media
{
    int pgcnt;
public:
    Book(string t,float p,int c):Media(t,p){
    pgcnt=c;}
    display(){Media::display();cout<<"Page count = "<<pgcnt<<endl;}

};
class Tape:public Media
{
    float pt;
public:
    Tape(string t,float p,float ptt):Media(t,p){
    pt=ptt;}
    display(){Media::display();cout<<"Playing time = "<<pt<<endl;}

};
main()
{
    Book B("RRR",345,3);
    Tape T("PPP",346,2);

    Media *bptr;
    cout<<"For class book::"<<endl<<endl;
    bptr=&B;
    bptr->display();
    cout<<endl<<"For class tape::"<<endl<<endl;
    bptr=&T;
    bptr->display();
}
