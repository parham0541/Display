#include <iostream>
#include <string>
using namespace std;

class Car
{
public:
    string name;
    string color;
    int year;

    void show()
    {
        cout << "Car Name: " << name << endl;
        cout << "Color: " << color << endl;
        cout << "Year: " << year << endl;
    }
};

int main()
{
    Car car1, car2;

    car1.name = "Toyota";
    car1.color = "White";
    car1.year = 2022;

    car2.name = "BMW";
    car2.color = "Black";
    car2.year = 2024;

    cout << "Car 1" << endl;
    car1.show();

    cout << endl;

    cout << "Car 2" << endl;
    car2.show();

    return 0;
}