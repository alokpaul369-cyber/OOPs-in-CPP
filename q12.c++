#include<bits/stdc++.h>
using namespace std;
class Employees
{
  string names;
  int ages;
  int salaries;
  string dateOfJoining;
  public:
     void getdata()
     {
        cout<<"Enter the name of Employee: ";
        cin>>names;
        cout<<"Enter the Ages of Employee: ";
        cin>>ages;
        cout<<"Enter the Salaries of Employee: ";
        cin>>salaries;
        cout<<"Enter the Date of Joining of Employee: ";
        cin>>dateOfJoining;
      }
      void display()
      {
        cout<<"The name of employees: "<<names<<endl;
        cout<<"The Ages of emplotees: "<<ages<<endl;
        cout<<"The Salaries of Employee: "<<salaries<<endl;
        cout<<"The Date of Joining of Employee: "<<dateOfJoining<<endl;
      }  
};
int main()
{
   int n;
   cout<<"Enter the number of the employees: ";
  cin>>n;
  Employees obj[n]; 
  for(int i=0;i<n;i++)
  {
    cout<<"Employee: "<<i+1<<endl;
    obj[i].getdata();
  }
   for(int i=0;i<n;i++)
  {
    cout<<"Employee: "<<i+1<<endl;
    obj[i].display();
  }
  return 0;
}