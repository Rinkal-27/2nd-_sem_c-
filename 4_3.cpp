#include<iostream>
#include<cmath>
using namespace std;
//inline double power(double base,int powerr=2);
inline double power(double base=3,int powerr=2)
{
   return pow(base,powerr);
}

main()
{
   double ans;
   ans=power(7.5,2);
   cout<<"Answer is : "<<ans<<endl;
   cout<<"Answer is : "<<power(2.2)<<endl;
   double x;
   cout<<"Enter base: ";
   cin>>x;
   cout<<"Answer is : "<<power(x)<<endl;
   cout<<"Answer is : "<<power()<<endl;


}
