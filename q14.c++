#include<bits/stdc++.h>
using namespace std;
class Equation 
{
  int n;
  float sum = 0;
  public:
  void getdata()
  {
    cout<<"Enter the value of n: ";
    cin>>n;
  }
  void calculate()
  {
    for(int i=1;i<=n;i++)
    {
      sum = sum + pow(((float)1/i),i);
    }
  }
  void display()
  {
    cout<<"The value of the series: "<<sum;
  }
};
int main()
{
  Equation obj;
  obj.getdata();
  obj.calculate();
  obj.display();
  return 0;
}