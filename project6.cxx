#include <iostream>
using namespace std;

class Circle
{
public:
    float radius;

    float area()
    {
        return 3.14 * radius * radius;
    }

    float circumference()
    {
        return 2 * 3.14 * radius;
    }
};

int main()
{
    Circle c;

    c.radius = 5;

    cout << "Radius: " << c.radius << endl;
    cout << "Area: " << c.area() << endl;
    cout << "Circumference: " << c.circumference() << endl;

    return 0;
}