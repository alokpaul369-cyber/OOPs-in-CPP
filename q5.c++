#include<bits/stdc++.h>
using namespace std;
class Swap
{
  int a,b;
  public:
   void getdata()
   {
     cout<<"Enter data for a:";
     cin>>a;
     cout<<"Enter data for b:";
     cin>>b;
   }
   void swap(int &a,int &b)
   {
     int temp;
     temp = a;
     a = b;
     b = temp;
   }
   void display()
   {
    cout<<"Before swap the value of a: "<<a<<endl;
    cout<<"Before swap the value of b: "<<b<<endl;
    swap(a,b);
    cout<<"After swap the value of a: "<<a<<endl;
    cout<<"After swap the value of b: "<<b<<endl;
   }
};
int main()
{
  Swap obj;
  obj.getdata();
  obj.display();
  return 0;
}