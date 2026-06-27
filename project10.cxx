#include <iostream>
using namespace std;

class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }

    int subtract(int a, int b)
    {
        return a - b;
    }

    int multiply(int a, int b)
    {
        return a * b;
    }

    float divide(int a, int b)
    {
        return (float)a / b;
    }
};

int main()
{
    Calculator c;

    cout << "10 + 5 = " << c.add(10, 5) << endl;
    cout << "10 - 5 = " << c.subtract(10, 5) << endl;
    cout << "10 * 5 = " << c.multiply(10, 5) << endl;
    cout << "10 / 5 = " << c.divide(10, 5) << endl;

    return 0;
}