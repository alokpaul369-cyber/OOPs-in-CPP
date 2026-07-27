#include <bits/stdc++.h>
using namespace std;
class Player
{
   string name[3];
   int run[3];
   int innings[3];
   int nout[3];
   int avg[3];
  public:
  void insert()
  {
    name[0] = "Shakib Al Hasan ";
    run[0] = 6062;
    innings[0] = 200;
    nout[0] = 20;

    name[1] = "Tamin Iqbal     ";
    run[1] = 5689;
    innings[1] = 167;
    nout[1] = 10;

    name[2] = "Mushfiqur Rahim ";
    run[2] = 5521;
    innings[2] = 171;
    nout[2] = 15;
  }
  void avarage()
  {
    for (int i = 0; i<3; i++)
    {
      avg[i] = run[i]/(innings[i] - nout[i]);
    }
  }
  void display()
  {
    cout<<fixed<<setprecision(2);
    cout<<"Player name\t\tRun\tInnings\tNot out\tAverage\n";
    for (int i=0;i<3;i++)
    {
      cout<<name[i]<< "\t" << run[i]<< "\t" <<innings[i]<<"\t"<<nout[i]<<"\t"<<avg[i] <<endl;
    }
  }
};
int main()
{
  Player obj;
  obj.insert();
  obj.avarage();
  obj.display();
  return 0;
}