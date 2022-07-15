

#include <iostream>

using namespace std;



class Swap

{

    int a, b;



public:

    void inp()

    {

        cin >> a >> b;

    }

    void swap()

    {

        a = a + b;

        b = a - b;

        a = a - b;

    }

    void print()

    {

        cout << "a = " << a << " and b = " << b << endl;

    }

};



int main()

{

    Swap n;

    Swap s1, s2;

    cout << "Enter Two Numbers: ";

    n.inp();



    cout << "Before Swap" << endl;

    n.print();



    n.swap();



    cout << "After Swap" << endl;

    n.print();



    return 0;

}




