#include<bits/stdc++.h>
using namespace std;
class Number
{
  int a;
  public:
  void getdata()
  {
  cout<<"Enter a number: ";
  cin>>a;
  }
  void display(Number b, Number c)
  {
    cout<<"First number: "<<b.a<<endl;
    cout<<"Second number: "<<c.a<<endl;
    cout<<"Sum= "<<b.a + c.a<<endl;
  }
};
int main()
{
  Number obj1,obj2,obj3;
  obj1.getdata();
  obj2.getdata();
  obj3.display(obj1,obj2);
}