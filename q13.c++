#include<bits/stdc++.h>
using namespace std;
class Employee
{
  public:
  virtual void employee()
  {
    cout<<"Employee Details: "<<endl;
  }
};
class Manager : public Employee
{
  public:
  string names;
  int ages;
  int salarys;
  void employee() override
  {
     cout<<"Enter Manager Name: ";
     cin>>names;
     cout<<"Enter MAnager Ages: ";
     cin>>ages;
     cout<<"Enter Manager salary: ";
     cin>>salarys;

     cout<<"Manager Name: "<<names<<endl;
     cout<<"Manager Ages: "<<ages<<endl;
     cout<<"Manager salary: "<<salarys<<endl;

  }
};
int main()
{
  Employee *Em;
  Manager manager;
  Em = &manager;
  Em->employee();
  return 0;
}