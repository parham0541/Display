#include <iostream>
#include <string>
using namespace std;

class Book
{
public:
    string title;
    string author;
    int pages;

    void show()
    {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Pages: " << pages << endl;
    }
};

int main()
{
    Book b;

    b.title = "C++ Programming";
    b.author = "Bjarne Stroustrup";
    b.pages = 500;

    b.show();

    return 0;
}