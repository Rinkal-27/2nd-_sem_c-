#include <iostream>

using namespace std;

int m = 30;

int main()

{

    int m = 20;

    {

        int m = 10;

        cout << "we are in inner block" << endl;

        cout << "value of m =" << m << "\n"; //10

        cout << "value of ::m =" << ::m << "\n";//30

    }

    cout << "we are in outer block" << endl;

    cout << "value of m =" << m << "\n";//20

    cout << "value of ::m =" << ::m << "\n";//30

    // getch();

    return 0;

}
