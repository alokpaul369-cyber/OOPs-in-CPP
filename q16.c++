#include<bits/stdc++.h>
using namespace std;
class Number;
void num(Number);
class Number
{
   int number;
   public:
   void num1()
   {
    cout<<"Enter a number: ";
    cin>>number;
   }
   friend void num(Number);
};
void num(Number number1)
{
  cout<<"The enter number is: "<<number1.number<<endl;
}
int main()
{
  Number obj;
  obj.num1();
  num(obj);
  return 0;
}