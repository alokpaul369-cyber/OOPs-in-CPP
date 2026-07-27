#include<bits/stdc++.h>
using namespace std;
class Student
{
   protected:
   string name;
   int id;
   public:
   void getdata()
   {
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter id: ";
    cin>>id;
   }
};
class Marks
{
   protected:
   float mark1,mark2,mark3;
  public:
  void getdata1()
  {
    cout<<"Enter mark for subject1: ";
    cin>>mark1;
    cout<<"Enter mark for subject2: ";
    cin>>mark2;
    cout<<"Enter mark for subject3: ";
    cin>>mark3;
  }
};
class Display : public Student,public Marks 
{
   float avg;
   public:
   void avarage()
   {
    avg = (mark1+mark2+mark3)/3;
   }
   void display()
   {
     cout<<"Name: "<<name<<endl;
     cout<<"ID: "<<id<<endl;
     cout<<"Avarage: "<<avg<<endl;
  }
};
int main()
{
  Display obj;
  obj.getdata();
  obj.getdata1();
  obj.avarage();
  obj.display();
  return 0;
}