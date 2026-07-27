#include<bits/stdc++.h>
using namespace std;
class Temperature
{
   float c,f;
   public:
   void getdata()
   {
    cout<<"Enter Temperature in Celsius: ";
    cin>>c;
   }
   void calculation()
   {
    f = (c * 9/5) + 32;
   }
   void display()
   {
    cout<<"Temperature in Fahrenheit: ";
    cout<<f;
   }
};
int main()
{
  Temperature obj;
  obj.getdata();
  obj.calculation();
  obj.display();
  return 0;
}