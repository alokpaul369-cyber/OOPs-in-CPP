#include<bits/stdc++.h>
using namespace std;
class Area
{
   char latter;
   float a,b,c;
   public:
   void Letter()
   {
    cout << "Enter Shape (T/C/S/R): ";
    cin >> latter;
   }
   void claculation()
   {
    switch (latter)
    {
      case 'T':
      case 't':
      cout << "Enter Parallel Side 1: ";
                cin >> a;
                cout << "Enter Parallel Side 2: ";
                cin >> b;
                cout << "Enter Height: ";
                cin >> c;
                cout << "Area of Trapezium = " << ((a + b) * c) / 2 << endl;
                break;
      case 'C':
      case 'c':
                 cout << "Enter Radius: ";
                cin >> a;
                cout << "Area of Circle = " << 3.1416 * a * a << endl;
                break;
      case 'S':
      case 's':
                cout << "Enter Side: ";
                cin >> a;
                cout << "Area of Square = " << a * a << endl;
                break;
      case 'R':
      case 'r':
                 cout << "Enter Diagonal 1: ";
                cin >> a;
                cout << "Enter Diagonal 2: ";
                cin >> b;
                cout << "Area of Rhombus = " << (a * b) / 2 << endl;
                break;
      default:
                cout << "Invalid Input!" << endl;          
    }
   }
};
int main()
{
  Area obj;
  obj.Letter();
  obj.claculation();
  return 0;
}