#include<bits/stdc++.h>
using namespace std;
class BankAccount
{
  string name,type;
  double acNumber,inRate,balance,total,years;
  public:
  void getdata()
  {
     cout << "Enter Depositor Name: ";
        getline(cin, name);

        cout << "Enter Account Number: ";
        cin >> acNumber;

        cout << "Enter Account Type: ";
        cin >> type;

        cout << "Enter Balance Amount: ";
        cin >> balance;

        cout << "Enter Annual Interest Rate (%): ";
        cin >> total;

        cout << "Enter Number of Years: ";
        cin >> years;
  }
  void calculate()
  {
   total = balance * pow((1 + inRate / 100), years);
  }
  void display()
  {
    cout<<"\nAccount Holder Name: "<<name<<endl;
    cout<< "Total Amount after " << years << "years = "<<total<<"Taka"<<endl;
  }
};
int main()
{
  BankAccount obj;
  obj.getdata();
  obj.calculate();
  obj.display();
  return 0;
}
