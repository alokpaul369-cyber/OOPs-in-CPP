#include<bits/stdc++.h>
using namespace std;
class Equation
{
  public:
  int execution(int b)
  {
    return pow(b,8);
  }
   int execution(int b,int c)
  {
    return pow(c,11);
  }
};
int main()
{
  Equation obj;
  int A,b,c;
  cout<<"Enter the value of b: ";
  cin>>b;
  cout<<"Enter the value of c: ";
  cin>>c;
  A = 188*obj.execution(b) + 299*obj.execution(b,c)-999;
  cout<<"value of A = "<<A<<endl;
  return 0;
}