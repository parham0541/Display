#include <iostream>
using namespace std;

class Time
{
public:
    int hour;
    int minute;
    int second;

    void show()
    {
        cout << hour << ":" << minute << ":" << second << endl;
    }
};

int main()
{
    Time t;

    t.hour = 10;
    t.minute = 30;
    t.second = 45;

    t.show();

    return 0;
}