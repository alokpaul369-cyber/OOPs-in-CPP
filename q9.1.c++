#include<bits/stdc++.h>
using namespace std;
// Single inharetance
class Rectangle
{
  protected:
  float a,b;
   public:
   void getdata()
   {
    cout<<"Enter length: ";
    cin>>a;
    cout<<"Enter Width: ";
    cin>>b;
   }
};
class Area : public Rectangle
{
   float c;
   public:
   void claculate()
   {
   c=a*b;
   }
   void display()
   {
    cout<<"Area of the Rectangle: ";
    cout<<c;
   }
};
int main()
{
  Area obj;
  obj.getdata();
  obj.claculate();
  obj.display();
  return 0;
}