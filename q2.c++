#include <bits/stdc++.h>
using namespace std;
class Pattern
{
   public:
   void display()
   {
   for (int i=5;i>=1;i--)
   {
    for (int j=1;j<=(6-i);j++)
    {
      cout<<i;
    }
    cout<<endl;
   }
  }
};
int main()
{
  Pattern obj;
  obj.display();
  return 0;
}