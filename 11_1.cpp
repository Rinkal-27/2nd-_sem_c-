#include<iostream>
#include<iomanip>
#include<fstream>
#include<string.h>
using namespace std;
main()
{
    fstream fptr;
    char s[27]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int len=strlen(s);
    fptr.open("lab.txt",ios::out);
    for(int i=0;i<len;i++)
    fptr.put(s[i]);
    fptr.close();
    fptr.open("lab.txt",ios::in);
    cout<<fptr.tellg()<<endl;
    fptr.seekg(-1,ios::end);
    char c;
    while(fptr.tellg()>=0)
    {
        fptr.get(c);
        cout<<c;
        fptr.seekg(-2,ios::cur);
    }
    cout<<endl;
    fptr.close();
}

