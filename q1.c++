#include <iostream>
#include <cmath>
using namespace std;

class Equation
{
private:
    double b;
    double c;
    double A;

public:
    void paul1()
    {
        cout << "Enter the value of b: ";
        cin >> b;

        cout << "Enter the value of c: ";
        cin >> c;
    }

    void paul2()
    {
        A = 188 * pow(b, 8) + 299 * pow(c, 11) - 999;
    }

    void paul3()
    {
        cout << "The value of A = " << A << endl;
    }
};

int main()
{
    Equation obj;

    obj.paul1();
    obj.paul2();
    obj.paul3();

    return 0;
}