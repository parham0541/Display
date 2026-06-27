#include <iostream>
using namespace std;

class Rectangle
{
public:
    int length;
    int width;

    int area()
    {
        return length * width;
    }

    int perimeter()
    {
        return 2 * (length + width);
    }
};

int main()
{
    Rectangle r1, r2;

    r1.length = 5;
    r1.width = 3;

    r2.length = 8;
    r2.width = 4;

    cout << "Rectangle 1" << endl;
    cout << "Area: " << r1.area() << endl;
    cout << "Perimeter: " << r1.perimeter() << endl;

    cout << endl;

    cout << "Rectangle 2" << endl;
    cout << "Area: " << r2.area() << endl;
    cout << "Perimeter: " << r2.perimeter() << endl;

    return 0;
}