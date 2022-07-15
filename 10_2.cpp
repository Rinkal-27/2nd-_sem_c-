o#include <bits/stdc++.h>

using namespace std;



ostream &rpm(ostream &obj)

{

    cout << fixed << setprecision(2);

    cout << "Rs. ";

    return obj;

}



int main()

{

    float amount;
    cout<<"Enter the amount : ";
    cin >> amount;

    cout << rpm << amount<<endl;

    return 0;

}
