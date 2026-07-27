#include<bits/stdc++.h>
using namespace std;
class Student
{
   string name;
   int id;
   float cgpa;
   public:
   Student(string name1,int id1, float cgpa1)
   {
     name = name1;
     id = id1;
     cgpa = cgpa1;
   }
   void display()
   {
    cout<<"Name: "<<name<<endl;
    cout<<"Id: "<<id<<endl;
    cout<<"CGPA: "<<cgpa<<endl;
   }
};
int main()
{
  Student obj("Alok",16,3.99);
  obj.display();
  return 0;
}