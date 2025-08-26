#include <iostream>
using namespace std;

class Date {
public:
    int d1;

Date();
void Display();
};

Date::Date() {
    cout << "Enter today's date: ";
    cin >> d1;
}

void Date::Display() 
{
    cout<<"Today the date is:";
    cout<<d1;
}

int main() {
    Date today;  
    today.Display();
    return 0;
}
