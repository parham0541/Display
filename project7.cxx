#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
string name;
int id;
float monthlySalary;

float yearlySalary()  
{  
    return monthlySalary * 12;  
}

};

int main()
{
Employee e;

e.name = "Ali";  
e.id = 1001;  
e.monthlySalary = 1500;  

cout << "Name: " << e.name << endl;  
cout << "Employee ID: " << e.id << endl;  
cout << "Monthly Salary: " << e.monthlySalary << endl;  
cout << "Yearly Salary: " << e.yearlySalary() << endl;  

return 0;

}